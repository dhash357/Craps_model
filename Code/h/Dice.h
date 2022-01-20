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
        int numDice;                // Number of dice total
        int sides;                  // Number of sides on each die

        std::vector<Die> dice;
        sRoll roll;                 // Current roll on the dice

	public:

        // Generic Constructor
        Dice();

        // Overloaded Constructors
	    Dice(int numDice, int s);

        // Accessor Functions
        int GetSides (void);                // Return the number of sides on each die
        int GetNumDice (void);              // Return the number of dice
        sRoll GetRoll (void);

        // Mutator Functions

        // Functions
		int Roll(void);                     // Set the roll structure to the values for a new roll.

};	//	Dice


#endif /* DICE_H_ */
