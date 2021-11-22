
#include "../h/BetList.h"
#include "../h/Bet.h"

//	Class 		BetList
//
//	Description	BetList is a standard list of class Bet. This list contains
//				all of the Bets that are currently on the table for the current 
//				player

inline BetList::BetList() {

	std::list<Bet>	bets;

}

// CheckBet
// Description	This method will check all of the Bet in the list. It will check 
// 				for winners, losers and bets that need to be assigned. It will also
// 				deal with maintence of the list. 
int BetList::CheckBet()
{

	return (1);
}

