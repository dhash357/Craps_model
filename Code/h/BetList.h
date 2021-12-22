#ifndef BETLIST_H_
#define BETLIST_H_

#include <vector>

#include "Bet.h"

class BetList
{ 
private:
	std::vector<Bet>	bets;

public:
//	inline BetList();
    BetList();
	int CheckBet();
	int Add(Bet&);
	int Remove(Bet);
	std::vector<Bet>::iterator FindBet(sBet bet);


    // Just for testing Loading fake data
    void LoadData(void);
};

#endif /* BETLIST_H_ */
