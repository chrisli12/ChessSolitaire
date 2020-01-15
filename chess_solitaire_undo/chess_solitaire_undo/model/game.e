note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	GAME

inherit
	ANY
		redefine
			out
		end

create {GAME_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			create msg.make_empty
			msg := "  Game being Setup..."
			number_of_chess := 0
			create game.make_filled (create {CHESS}.make (".", 4, 4), 4, 4)
			game_started := false
			create b.make_empty
		end

feature -- model attributes
	b: STRING
	game_started: BOOLEAN
	game_overed: BOOLEAN
	game: ARRAY2[CHESS]
	number_of_chess : INTEGER
	--default msg is "Game being Setup..."
	msg: STRING



feature -- model operations
	start_game
		require
			game_not_yet_started:
				game_started = false
			game_is_not_overed:
				game_overed = false
		do
			game_started := true
			game_overed := false
		end

	end_game
		do
			game_started := false
			game_overed := true
		end

	msg_set(msg_l: STRING)
		do
			msg := msg_l
		end

	setup(c: STRING; r: INTEGER; cl: INTEGER )
	 		--perform setup to the model state

	 	require
	 		game_not_started:
	 			game_started = false

	 		non_occupied:
	 			game[r,cl].chess ~ "."

			local chess_l: CHESS
	 	do
	 		if c ~ "K" then
	 			create {KING} chess_l.make (c, r, cl)
	 			game.put (chess_l, r, cl)
	 			number_of_chess := number_of_chess + 1
	 		elseif c ~ "N" then
	 			create {KNIGHT} chess_l.make (c, r, cl)
	 			current.game.put (chess_l, r, cl)
	 			number_of_chess := number_of_chess + 1
	 		elseif c ~ "Q" then
	 			create {QUEEN} chess_l.make (c, r, cl)
	 			current.game.put (chess_l, r, cl)
	 			number_of_chess := number_of_chess + 1
			elseif c ~ "B" then
	 			create {BISHOP} chess_l.make (c, r, cl)
	 			current.game.put (chess_l, r, cl)
	 			number_of_chess := number_of_chess + 1
	 		elseif c ~ "R" then
	 			create {ROOK} chess_l.make (c, r, cl)
	 			current.game.put (chess_l, r, cl)
	 			number_of_chess := number_of_chess + 1
	 		elseif c ~ "P" then
	 			create {PAWN} chess_l.make (c, r, cl)
	 			current.game.put (chess_l, r, cl)
	 			number_of_chess := number_of_chess + 1
	 		end
	 	end



	move_and_capture(r1: INTEGER; c1: INTEGER; r2: INTEGER; c2: INTEGER)
		do
			if game_overed = true then
				msg_set("  Error: Game already over")
			elseif number_of_chess = 1 then
				msg_set("  Game Over: You Win!")
				game_overed := true
				game_started := true
			else
			-- do the capture
			current.game[r2,c2] := current.game[r1,c1]
			--update their coordinate inside the chess
			current.game[r1,c1].set_pos (r2, c2)
			current.game[r1,c1] := create {CHESS}.make_empty(".")
			number_of_chess := number_of_chess - 1
			end
		end



	move(r: INTEGER; c: INTEGER)

		do
			if game_overed = true then
				msg_set("  Error: Game already over")
			else
			 b := game[r,c].moves_out
			end
		end

	reset
			-- Reset model state.
		do
			current.game.wipe_out
			game_started := false
			make
		end

	redo
		do
		end

	undo
		do
		end
feature -- queries

	out : STRING
		do
			create Result.make_from_string ("  ")
			Result.append ("# of chess pieces on board: ")
			Result.append (number_of_chess.out +  "%N" + msg + "%N" )
			Result.append("  ")
			--game goes here
			if (b.is_empty) then
				across
					game as g
				loop
					Result.append(g.item.chess.out)
					--print in next line
					if g.cursor_index = 4 or g.cursor_index = 8 or g.cursor_index = 12 then
						Result.append( "%N  " )
					end
				end
			else
				Result.append(b)
				b := ""
			end
		end

end




