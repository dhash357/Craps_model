//#pragma once
#ifndef BET_H_
#define BET_H_

#include <memory>
#include <utility>
#include "BetType.h"

class Bet
{
	private:
		// Variables
		int amount;						// Amount of money for this bet
		int betTypeId;					// What type of bet is this
//		BetType betType;				// object of the class of BetType for the type of this bet
//		BetType* betType;				// Pointer to the class of BetType for the type of this bet
		std::unique_ptr<BetType> betType;

		// Methods
		int CreateBetType(void);		// create the BetType object

	public:

//		std::unique_ptr<BetType> betType = NULL;

		Bet(int, int);

		int BetCheck (int);


};

#endif /* BET_H_ */
