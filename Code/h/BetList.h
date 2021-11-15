#ifndef BETLIST_H_
#define BETLIST_H_

#include <list>

//#include "/workspaces/Craps_model/Code/h/Bet.h"
#include "Bet.h"

class BetList
{
private:
	std::list <Bet>	bets;

public:
	inline BetList();
	int CheckBet();
};

#endif /* BETLIST_H_ */
