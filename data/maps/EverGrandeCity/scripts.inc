EverGrandeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
	.byte 0

EverGrandeCity_OnTransition:
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

EverGrandeCity_EventScript_VictoryRoadSign::
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_CitySign::
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_PokemonLeagueSign::
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_SetVisitedEverGrande::
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setvar VAR_TEMP_1, 1
	end

<<<<<<< HEAD
EverGrandeCity_Text_EnteringVictoryRoad:
	.string "ENTERING VICTORY ROAD$"

EverGrandeCity_Text_EnteringPokemonLeague:
	.string "ENTERING POKéMON LEAGUE\n"
	.string "CENTER GATE$"

EverGrandeCity_Text_CitySign:
	.string "EVER GRANDE CITY\p"
=======
EverGrandeCity_Text_EnteringVictoryRoad: @ 81E7D4F
	.string "Entering Victory Road$"

EverGrandeCity_Text_EnteringPokemonLeague: @ 81E7D65
	.string "Entering Pokémon League\n"
	.string "Center Gate$"

EverGrandeCity_Text_CitySign: @ 81E7D89
	.string "Ever Grande City\p"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24
	.string "“The paradise of flowers, the sea,\n"
	.string "and Pokémon.”$"

