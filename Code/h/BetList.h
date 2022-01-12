#ifndef BETLIST_H_
#define BETLIST_H_

#include <deque>

#include "Bet.h"

class BetList
{ 
private:
	std::deque<Bet>	bets;

public:
    // Default Constructor
    BetList(void);

    // Default Destructor
    ~BetList();

	// Standard Functions
    int CheckBet(void);
	int Add(Bet);
	int Remove(Bet);
	std::deque<Bet>::iterator FindBet(sBet);


    // Just for testing Loading fake data
//    void LoadData(std::vector<Bet>& );
    void LoadData();
};

#endif /* BETLIST_H_ */
