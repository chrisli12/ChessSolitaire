note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_UNDO
inherit
	ETF_UNDO_INTERFACE
create
	make
feature -- command
	undo
    	do
    		if model.game_started = false then
				model.msg_set ("  Error: Nothing to undo")
				etf_cmd_container.on_change.notify ([Current])
			else
				model.undo
				etf_cmd_container.on_change.notify ([Current])
			end
    	end

end
