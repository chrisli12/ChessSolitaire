note
	description: "Summary description for {BISHOP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BISHOP
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
			 y,x: INTEGER
	do
		--empty 4x4 gird
		create moves.make_filled (".", 4, 4)
		--put B in its position
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
				if (x /= current.pos_x or y /= current.pos_y) then
					if ((x - current.pos_x).abs = (y - current.pos_y).abs) then
						moves[y,x] := "+"
					end
				end
				x := x +1
			end
			y := y + 1
		end
		Result := moves
	end
end
