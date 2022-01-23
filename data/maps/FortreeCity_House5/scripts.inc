FortreeCity_House5_MapScripts::
	.byte 0

FortreeCity_House5_EventScript_PokefanF::
	msgbox FortreeCity_House5_Text_TreeHousesAreGreat, MSGBOX_NPC
	end

FortreeCity_House5_EventScript_Man::
	msgbox FortreeCity_House5_Text_AdaptedToNature, MSGBOX_NPC
	end

FortreeCity_House5_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox FortreeCity_House5_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
FortreeCity_House5_Text_TreeHousesAreGreat:
	.string "The tree houses of FORTREE are great!\p"
=======
FortreeCity_House5_Text_TreeHousesAreGreat: @ 8217F17
	.string "The tree houses of Fortree are great!\p"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24
	.string "I think it's the number one town for\n"
	.string "living together with Pokémon.$"

<<<<<<< HEAD
FortreeCity_House5_Text_AdaptedToNature:
	.string "POKéMON and people have adapted to\n"
=======
FortreeCity_House5_Text_AdaptedToNature: @ 8217F80
	.string "Pokémon and people have adapted to\n"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24
	.string "nature for survival.\p"
	.string "There's no need to make nature\n"
	.string "conform to the way we want to live.$"

<<<<<<< HEAD
FortreeCity_House5_Text_Zigzagoon:
	.string "ZIGZAGOON: Bufuu!$"
=======
FortreeCity_House5_Text_Zigzagoon: @ 8217FFB
	.string "Zigzagoon: Bufuu!$"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24

