LavaridgeTown_House_MapScripts::
	.byte 0

LavaridgeTown_House_EventScript_OldMan::
	msgbox LavaridgeTown_House_Text_WifeWarmingEggInHotSprings, MSGBOX_NPC
	end

LavaridgeTown_House_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox LavaridgeTown_House_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
LavaridgeTown_House_Text_WifeWarmingEggInHotSprings:
	.string "My wife's warming an EGG in the hot\n"
=======
LavaridgeTown_House_Text_WifeWarmingEggInHotSprings: @ 81FF92E
	.string "My wife's warming an Egg in the hot\n"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24
	.string "springs. This is what she told me.\p"
	.string "She left two Pokémon with the Day Care.\n"
	.string "And they discovered that Egg!$"

<<<<<<< HEAD
LavaridgeTown_House_Text_Zigzagoon:
	.string "ZIGZAGOON: Pshoo!$"
=======
LavaridgeTown_House_Text_Zigzagoon: @ 81FF9BB
	.string "Zigzagoon: Pshoo!$"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24

