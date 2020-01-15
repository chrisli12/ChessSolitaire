note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MOVES
inherit
	ETF_MOVES_INTERFACE
create
	make
feature -- command
	moves(row: INTEGER_32 ; col: INTEGER_32)
    	do
			-- perform some update on the model state

			--Error: game have not start
			if model.game_started = false and model.game_overed = false then
				model.msg_set ("  Error: Game not yet started")
				etf_cmd_container.on_change.notify ([Current])

			--Error: Invalid slot
			elseif (row = 0) or (row > 4) or (col > 4) or (col = 0) then
				model.msg_set ("  Error: (" + row.out + ", " + col.out + ") not a valid slot")
				etf_cmd_container.on_change.notify ([Current])

			--Error: slot not occupied
			elseif model.game[row,col].chess.out ~ "." then
				model.msg_set ("  Error: Slot @ (" + row.out + ", " + col.out +") not occupied")
				etf_cmd_container.on_change.notify ([Current])

			else
				model.move(row, col)
				etf_cmd_container.on_change.notify ([Current])
			end
    	end
end
