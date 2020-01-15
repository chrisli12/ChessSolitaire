note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_START_GAME
inherit
	ETF_START_GAME_INTERFACE
create
	make
feature -- command
	start_game
    	do
			-- perform some update on the model state
			if model.game_started = true then
				model.msg_set ("  Error: Game already started")
				etf_cmd_container.on_change.notify ([Current])
			elseif model.number_of_chess = 1 then
				model.msg_set ("  Game Over: You Win!")
				model.end_game
				etf_cmd_container.on_change.notify ([Current])
			else
				model.start_game
				model.msg_set ("  Game In Progress...")
				etf_cmd_container.on_change.notify ([Current])
			end
    	end

end
