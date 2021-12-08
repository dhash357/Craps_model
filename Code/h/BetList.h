#ifndef BETLIST_H_
#define BETLIST_H_

#include <vector>

//#include "/workspaces/Craps_model/Code/h/Bet.h"
#include "Bet.h"

class BetList
{
private:
	std::vector<Bet>	bets;

public:
	inline BetList();
	int CheckBet();
	int Add(Bet);
	int Remove(Bet);
	std::vector<Bet>::iterator BetList::FindBet(Bet bet);
};

#endif /* BETLIST_H_ */
