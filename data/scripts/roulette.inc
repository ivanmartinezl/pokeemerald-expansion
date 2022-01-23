Roulette_EventScript_Table1::
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 0
	getpokenewsactive POKENEWS_GAME_CORNER
	goto_if_eq VAR_RESULT, FALSE, Roulette_EventScript_Play
	addvar VAR_0x8004, ROULETTE_SPECIAL_RATE
	goto Roulette_EventScript_Play
	end

Roulette_EventScript_Table2::
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 1
	getpokenewsactive POKENEWS_GAME_CORNER
	goto_if_eq VAR_RESULT, FALSE, Roulette_EventScript_Play
	addvar VAR_0x8004, ROULETTE_SPECIAL_RATE
	goto Roulette_EventScript_Play
	end

Roulette_EventScript_Play::
	special PlayRoulette
	waitstate
	end
	
Roulette_Text_PlayMinimumWagerIsX::
	.string "The minimum wager at this table\n"
	.string "is {STR_VAR_1}. Do you want to play?$"

<<<<<<< HEAD
Roulette_Text_NotEnoughCoins::
	.string "You don't have enough COINS.$"
=======
Roulette_Text_NotEnoughCoins:: @ 82A5B4E
	.string "You don't have enough Coins.$"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24

Roulette_Text_SpecialRateTable::
	.string "Special rate table right now!$"

Roulette_Text_ControlsInstruction::
	.string "Place your wager with the + Control\n"
	.string "Pad, then press the A Button.$"

Roulette_Text_ItsAHit::
	.string "It's a hit!$"

Roulette_Text_Jackpot::
	.string "Jackpot!$"

Roulette_Text_NothingDoing::
	.string "Nothing doing!$"

<<<<<<< HEAD
Roulette_Text_YouveWonXCoins::
	.string "You've won {STR_VAR_1} COINS!$"

Roulette_Text_NoCoinsLeft::
	.string "No COINS left…$"
=======
Roulette_Text_YouveWonXCoins:: @ 82A5BEF
	.string "You've won {STR_VAR_1} Coins!$"

Roulette_Text_NoCoinsLeft:: @ 82A5C04
	.string "No Coins left…$"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24

Roulette_Text_KeepPlaying::
	.string "Keep playing?$"

<<<<<<< HEAD
Roulette_Text_BoardWillBeCleared::
	.string "The ROULETTE board will be cleared.$"

@ Unused
Roulette_Text_YouDontHaveACoinCase::
	.string "You don't have a COIN CASE.$"

Roulette_Text_CoinCaseIsFull::
	.string "Your COIN CASE is full!\n"
=======
Roulette_Text_BoardWillBeCleared:: @ 82A5C21
	.string "The Roulette board will be cleared.$"

@ Unused
Roulette_Text_YouDontHaveACoinCase:: @ 82A5C45
	.string "You don't have a Coin Case.$"

Roulette_Text_CoinCaseIsFull:: @ 82A5C61
	.string "Your Coin Case is full!\n"
>>>>>>> 4d1bf9605eadf3149434efea17932b2dcfa12b24
	.string "Coins can be exchanged for prizes.$"
