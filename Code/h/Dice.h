#ifndef DICE_H_
#define DICE_H_

#include <vector>

#include "../h/Die.h"

struct sRoll     // Structure of the roll containing the total and result of each die
{
	/* data */
	int total = 0;						// Total amount of the roll
	int valueL;						    // Value of the left die
	int valueR;							// Value of the right die

};

// dice.h
class Dice
{
	private:
		int sides;
        int numDice;

        std::vector<Die> dice;

	public:
	    Dice(int numDice, int s);

		int Roll(sRoll& roll);

};	//	Dice


#endif /* DICE_H_ */
