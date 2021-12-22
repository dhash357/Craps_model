#ifndef CRAPS_H_
#define CRAPS_H_

#include "../h/Dice.h"

// Generic values
const int retGood = 0;      // return Good - Success
const int retBad = -1;      // return Bad - Failed

const int retFound = 1;     // return that something was found in a search
const int retNotFound = 0;  // return that nothing was found in a search

const int retNoChange = 1;  // return that there is nothing to do to the bet
const int retWinner = 2;    // return that the bet is a winner
const int retLoser = 3;     // return that the bet is a loser
const int retAssign = 4;    // return that the bet needs is reAssigned

// Action to perform after roll for this bet
const int betActNone = 0;   // No Action
const int betActDel = 1;    // Delete bet

const int btPassLine = 1;
const int btComeLine = 2;
const int btPass = 3;
const int btCome = 4;
const int btOdds = 5;
const int btField = 6;
const int btOneTime = 7;
const int btHardways = 8;
const int btPlace = 9;

const int dieLeft = 0;  // Array index for left die
const int dieRight = 1; // Array index for right die



// Craps
class Craps
{
	private:
		int sides;

        // Create vector of dice

        Dice dice;

	public:
        Craps(void);
        int Roll(void);


};	//	Craps




#endif /* CRAPS_H_ */
