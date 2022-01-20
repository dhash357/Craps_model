#include <ctime>
#include <cstdlib>
#include "../h/Die.h"

/**
 * Name: Dice
 *
 * Prototype: void Dice(int s)
 * 
 * Desc: This is the constructor for the dice. It initialized the random number numbers and 
 *          determines the number of sides on the die
 * 
 * Param:   int s       Number of sides on the die
 * 
 * Create Date: 21/11/18
 * Create By:   DJH
 * 
 * Modification:
 * 
 */ 
Die::Die(int s) {
		int seed;


		this->sides = s;

		// seed the random number function
		seed = time(NULL);	// TODO 210808 DJH	Record the seed in the output file So we can always run the simulation again exactly the same
		srand(seed);

	}

/**
 * Name: GetSides
 *
 * Prototype: int GetSides(void)
 * 
 * Desc: This returns the number of sides for this die
 * 
 * Param:   void
 * 
 * Create Date: 22/01/18
 * Create By:   DJH
 * 
 * Modification:
 * 22/01/18 DJH     Created
 * 
 */ 
int Die::GetSides()
{
	int ret;		// Value returned from the roll of the die

	ret = rand() % this->sides + 1;	// Get a random number from 1 to # of sides of the die
	
	return (ret);
}

/**
 * Name: Roll
 *
 * Prototype: int Roll(void)
 * 
 * Desc: This simulates the roll of the die based on a random number and the number of sides
 * 
 * Param:   void
 * 
 * Create Date: 21/11/18
 * Create By:   DJH
 * 
 * Modification:
 * 
 */ 
int Die::Roll()
{
	int ret;		// Value returned from the roll of the die

	ret = rand() % this->sides + 1;	// Get a random number from 1 to # of sides of the die
	
	return (ret);
}

