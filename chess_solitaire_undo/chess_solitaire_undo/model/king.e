note
	description: "Summary description for {KING}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	KING
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
		x,y: INTEGER
	do
	--create an empty 4x4 gird with "."
		create moves.make_filled (".", 4, 4)
		--put the current K in its position
		moves[current.pos_y, current.pos_x] := current.chess
		--loop from y
		from
			y := 1
		until
			y > 4
		loop
			--loop from x
			from
				x :=1
			until
				x > 4
			loop
				-- start the loop
				if (((y = current.pos_y - 1 or y = current.pos_y + 1) and (x = current.pos_x  + 1 or x = current.pos_x - 1)) OR
					((y = current.pos_y - 1 or y = current.pos_y + 1) and x = current.pos_x ) or
					((x = current.pos_x - 1 or x = current.pos_x + 1) and y = current.pos_y )) then
						moves[y,x] := "+"
				end
				x := x + 1
			end
			y := y + 1
		end
		Result := moves
	end
end
