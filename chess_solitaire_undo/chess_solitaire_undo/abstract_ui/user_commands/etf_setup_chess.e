note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SETUP_CHESS
inherit
	ETF_SETUP_CHESS_INTERFACE
create
	make
feature -- command
	setup_chess(c: INTEGER_32 ; row: INTEGER_32 ; col: INTEGER_32)
		require else
			setup_chess_precond(c, row, col)
    	do
			-- perform some update on the model state
			if model.game_started = true then
				model.msg_set ("  Error: Game already started")
				etf_cmd_container.on_change.notify ([Current])
			elseif (row > 4) or (col > 4) or (row = 0) or  (col = 0) then
				model.msg_set ("  Error: (" + row.out + ", " + col.out + ") not a valid slot")
				etf_cmd_container.on_change.notify ([Current])
			elseif model.game[row,col].chess.out /~ "." then
				model.msg_set ("  Error: Slot @ (" + row.out + ", " + col.out +") already occupied")
				etf_cmd_container.on_change.notify ([Current])
			else
				if attached enum_items_inverse.item (c) as enum then
					--enum is a STRING with the type of the chess
				model.setup(enum, row, col)
				end
				model.msg_set ("  Game being Setup...")
				etf_cmd_container.on_change.notify ([Current])
			end
    	end

end
