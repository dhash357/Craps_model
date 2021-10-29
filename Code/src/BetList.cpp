#include "..\h\BetList.h"

#include <list>


//	Class 		BetList
//
//	Description	BetList is a standard list of class Bet. This list contains
//				all of the Bets that are currently on the table for the current 
//				player

BetList::BetList() {

	list <Bet>	bets;
}

// CheckBet
// Description	This method will check all of the Bet in the list. It will check 
// 				for winners, losers and bets that need to be assigned. It will also
// 				deal with maintence of the list. 
int BetList::CheckBet()
{
	int ret;		// Value returned from the roll of the die

	ret = rand() % this->sides + 1;	// Get a random number from 1 to # of sides of the die

	return (ret);
}

