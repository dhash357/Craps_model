#ifndef BETLIST_H_
#define BETLIST_H_

#include <vector>

#include "Bet.h"
#include "Dice.h"

class BetList
{ 
private:
	std::vector<Bet>	bets;

public:
    // Default Constructor
    BetList(void);

    // Default Destructor

	// Standard Functions
	int Add(Bet);
    int CheckBet(sRoll);                         // Check all of the bets in the list based on the current settings of the dice (roll)
//	int Remove(Bet);
	std::vector<Bet>::iterator FindBet(sBet);


    void PrintBets(void);
    void PrintBet(Bet);


    void LoadData(void);
};

#endif /* BETLIST_H_ */
