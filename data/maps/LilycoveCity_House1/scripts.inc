LilycoveCity_House1_MapScripts::
	.byte 0

LilycoveCity_House1_EventScript_ExpertM::
	msgbox LilycoveCity_House1_Text_PokemonPartnersNotTools, MSGBOX_NPC
	end

LilycoveCity_House1_EventScript_Kecleon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
	msgbox LilycoveCity_House1_Text_Kecleon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
LilycoveCity_House1_Text_PokemonPartnersNotTools:
	.string "POKéMON are partners to people.\n"
=======
LilycoveCity_House1_Text_PokemonPartnersNotTools: @ 821ECEA
	.string "Pokémon are partners to people.\n"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24
	.string "They aren't our tools.\p"
	.string "Unfortunately, there are some people\n"
	.string "who fail to understand that…$"

<<<<<<< HEAD
LilycoveCity_House1_Text_Kecleon:
	.string "KECLEON: Ruroro?$"
=======
LilycoveCity_House1_Text_Kecleon: @ 821ED63
	.string "Kecleon: Ruroro?$"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24

