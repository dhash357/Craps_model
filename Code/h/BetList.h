#ifndef BETLIST_H_
#define BETLIST_H_

#include <vector>

#include "Bet.h"

class BetList
{ 
private:
	std::vector<Bet>	bets;

public:
    // Default Constructor
    BetList(void);

    // Default Destructor
    ~BetList();

	// Standard Functions
    int CheckBet(void);
	int Add(const Bet&);
	int Remove(Bet);
	std::vector<Bet>::iterator FindBet(sBet);


    // Just for testing Loading fake data
    void LoadData(std::vector<Bet>& );
};

#endif /* BETLIST_H_ */
