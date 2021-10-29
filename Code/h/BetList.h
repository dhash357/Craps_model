#pragma once

#include <list>

#include "/workspaces/Craps_model/Code/h/Bet.h"

class BetList
{
private:
	std::list <Bet>	bets;

public:
	inline BetList();
	int CheckBet();
};

