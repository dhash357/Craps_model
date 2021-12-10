#include <ctime>
#include <cstdlib>
#include "../h/Dice.h"


Dice::Dice(int s) {
		int seed;

		this->sides = s;

		// seed the random number function
		seed = time(NULL);	// TODO 210808 DJH	Record the seed in the output file So we can always run the simulation again exactly the same
		srand(seed);

	}
int Dice::Roll()
{
	int ret;		// Value returned from the roll of the die

	ret = rand() % this->sides + 1;	// Get a random number from 1 to # of sides of the die
	
	return (ret);
}

