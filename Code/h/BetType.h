#ifndef BETTYPE_H_
#define BETTYPE_H_

#include <vector>
#include "Craps.h"

// BetType.h
class BetType
{
	private:
		// Variables

		// Methods

	protected:

		// Variables
        std::vector<int> winner;	// Vector of winning numbers for BetTypes. This vector will be filled for each child of BetType
        std::vector<int> loser;		// Vector of losing numbers for BetTypes. This vector will be filled for each child of BetType
        std::vector<int> assign;	// Vector of numbers that need to be reassigned for BetTypes. This vector will be filled for each child of BetType
		int oddsD;					// Denominator for calculating odds for each Child of BetType
		int oddsN;					// Numerator for calculating odds for each Child of BetType
		int amount;					// Amount of the bet

		// Methods
        int Winner(int);
        virtual int Loser(int);
        virtual int Assign(int);
		virtual int CalculateWin(void);	// Determine the amount of money that is won using the Amount of the Bet being passed in

		int CheckVector(std::vector<int>, int);


	public:

		// Methods
		BetType(void);						// generic Constructor 
		BetType(int amount);				// Constructor pass in the amount of the bet when constructed
		BetType(int amount, int number);	// Constructor with amount and number passed in for constructor

		virtual ~BetType() {};

		int Check(int);

// Just junk for debug
void PrintVector(std::vector<int> vec);

};	//	Dice

#endif /* BETTYPE_H_ */
