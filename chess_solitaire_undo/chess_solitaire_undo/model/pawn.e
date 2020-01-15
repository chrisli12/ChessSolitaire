note
	description: "Summary description for {PAWN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PAWN
	inherit
		CHESS
		redefine
			possible_moves
			end
create
	make

feature -- implemenation
	--display the posible moves depends on the current x and y location
	possible_moves:ARRAY2[STRING]
	local moves: ARRAY2[STRING]
		x,y: INTEGER
	do
		--empty 4x4 gird
		create moves.make_filled (".", 4, 4)
		--put P in its position
		moves[current.pos_y, current.pos_x] := current.chess
		from
			y := 1
		until
			y > 4
		loop
			from
				x := 1
			until
				x > 4
			loop
				if ((y = current.pos_y - 1 and (x = current.pos_x  + 1 or x = current.pos_x - 1)) ) then
						moves[y,x] := "+"
				end
				x := x +1
			end
			y := y + 1
		end
		Result := moves
	end
end
