note
	description: "Summary description for {KNIGHT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	KNIGHT
	inherit
		CHESS
		redefine
			possible_moves
			end
create
	make

feature --implementation
	possible_moves: ARRAY2[STRING]
	local
		moves: ARRAY2[STRING]
		x, y: INTEGER
	do
	--empty 4x4 gird
		create moves.make_filled (".", 4, 4)
		--put N in its position
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
				if ((x = current.pos_x - 1 and (y = current.pos_y  - 2 or y = current.pos_y + 2)) OR
					(x = current.pos_x + 1  and (y = current.pos_y  - 2 or y = current.pos_y + 2)) OR
					(y = current.pos_y - 1 and (x = current.pos_x  - 2 or x = current.pos_x + 2)) OR
					(y = current.pos_y + 1  and (x = current.pos_x  - 2 or x = current.pos_x + 2))
					) then
						moves[y,x] := "+"
				end
				x := x +1
			end
			y := y + 1
		end
		Result := moves
	end
end
