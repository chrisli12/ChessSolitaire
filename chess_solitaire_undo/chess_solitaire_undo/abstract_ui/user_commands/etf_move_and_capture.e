note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MOVE_AND_CAPTURE
inherit
	ETF_MOVE_AND_CAPTURE_INTERFACE
create
	make

feature -- command
	move_and_capture(r1: INTEGER_32 ; c1: INTEGER_32 ; r2: INTEGER_32 ; c2: INTEGER_32)
		local i:INTEGER
			  v: BOOLEAN
    	do

			-- perform some update on the model state
			--Error: game have started yet
			if model.game_started = false and model.game_overed = false then
				model.msg_set ("  Error: Game not yet started")
				etf_cmd_container.on_change.notify ([Current])
			--Error:
			elseif model.game_overed = true then
				model.msg_set("  Error: Game already over")
				etf_cmd_container.on_change.notify ([Current])

			--Error: game[r1,c1] is not a valid slot
			elseif (r1 = 0) or (r1 > 4) or (c1 > 4) or (c1 = 0) then
				model.msg_set ("  Error: (" + r1.out + ", " + c1.out + ") not a valid slot")
				etf_cmd_container.on_change.notify ([Current])

			--Error: game[r2,c2] is not a valid slot
			elseif (r2 = 0) or (r2 > 4) or (c2 > 4) or (c2 = 0) then
				model.msg_set ("  Error: (" + r2.out + ", " + c2.out + ") not a valid slot")
				etf_cmd_container.on_change.notify ([Current])

			--Error: game[r1,c1] has no chess
			elseif model.game[r1,c1].chess.out ~ "." then
				model.msg_set ("  Error: Slot @ (" + r1.out + ", " + c1.out +") not occupied")
				etf_cmd_container.on_change.notify ([Current])

			--Error: game[r2,c2] has no chess
			elseif model.game[r2,c2].chess.out ~ "." then
				model.msg_set ("  Error: Slot @ (" + r2.out + ", " + c2.out +") not occupied")
				etf_cmd_container.on_change.notify ([Current])

			--Error: check for possible moves
			elseif model.game[r1,c1].possible_moves[r2,c2] /~ "+" then
				model.msg_set ("  Error: Invalid move of " + model.game[r1,c1].chess + " from (" + r1.out + ", " + c1.out + ") to (" + r2.out + ", " + c2.out + ")" )
				etf_cmd_container.on_change.notify ([Current])
			else
				from
				 	i := 1
				until
					i > model.game[r1,c1].possible_moves.count OR
					v ~ true
				loop
					--find the index where it is the possible moves of the current chess object
					if model.game[r1,c1].possible_moves.at (i) ~ "+" then
						--use that index to see if there is any block in between r1c1 and r2c2
						if model.game.at (i).chess /~ "." and model.game.at (i).chess /~ model.game[r2,c2].chess then
							--put error message if there is a block in between
							model.msg_set ("  Error: Block exists between (" + r1.out + ", " + c1.out + ") and (" + r2.out + ", " + c2.out + ")" )
							etf_cmd_container.on_change.notify ([Current])
						end
						else
							--if there is no block, update the game model
							model.move_and_capture (r1, c1, r2, c2)
							if model.number_of_chess = 1 then
								model.end_game
								model.msg_set("  Game Over: You Win!")
							end
							etf_cmd_container.on_change.notify ([Current])
							v := true
					end
					i := i + 1
				end

			end

		end
end
