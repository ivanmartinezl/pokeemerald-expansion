DewfordTown_House1_MapScripts::
	.byte 0

DewfordTown_House1_EventScript_Man::
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Woman::
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland:
	.string "There's a lot to be said for living on\n"
	.string "a small island like this in harmony with\l"
	.string "Pokémon and the family.$"

<<<<<<< HEAD
DewfordTown_House1_Text_LifeGoesSlowlyOnIsland:
	.string "I left the major port of SLATEPORT\n"
	.string "CITY when I married my husband here.\p"
=======
DewfordTown_House1_Text_LifeGoesSlowlyOnIsland: @ 81FC45B
	.string "I left the major port of Slateport\n"
	.string "City when I married my husband here.\p"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24
	.string "Life goes by slowly on this little\n"
	.string "island. But being surrounded by the\l"
	.string "beautiful sea--that's happiness, too.$"

<<<<<<< HEAD
DewfordTown_House1_Text_Zigzagoon:
	.string "ZIGZAGOON: Guguuh!$"
=======
DewfordTown_House1_Text_Zigzagoon: @ 81FC510
	.string "Zigzagoon: Guguuh!$"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24

