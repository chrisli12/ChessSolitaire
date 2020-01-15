note
	description: "Summary description for {CHESS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CHESS
	inherit
	ANY
		redefine
			out
		end
create
	make,
	make_empty

feature --attribute
	chess: STRING
	pos_x: INTEGER
	pos_y: INTEGER

feature --command
	set_pos(r: INTEGER; c: INTEGER)
	do
		pos_x := c
		pos_y := r
	end
feature --implementation
	make_empty(c: STRING)
	do
		chess := c
	end
	make(c: STRING; y: INTEGER; x: INTEGER)
	do
		chess := c
		pos_x := x
		pos_y := y
	end

feature --inquiries
	possible_moves:ARRAY2[STRING]
	local moves: ARRAY2[STRING]
	do
		create moves.make_filled (".", 4, 4)
		Result := moves
	end

	moves_out: STRING
	local s: STRING
	do
		create s.make_empty
		across
				possible_moves as m
			loop
				s.append(m.item)
				--print in next line
				if m.cursor_index = 4 or m.cursor_index = 8 or m.cursor_index = 12 then
					s.append( "%N  " )
				end
			end
			Result := s
			s := ""
	end

	out: STRING
	do
		Result := chess
	end
end
