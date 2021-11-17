#include <iostream>
#include <vector>
#include "../h/BetType.h"
#include "../h/Craps.h"

// BetType
// Description	BetType is the type of each bet and all of the details 
//				about that specific bet. 
// Types
//		Come			Bets on the Come line unassigned to a number
//		ComeAssigned	Come bets that are assigned to a number
//		ComeOdds		Odds for a ComeAssigned bet
//		Pass			Bets on the Pass line unassigned to a number
//		PassAssigned	Pass bets that are assigned to a number
//		PassOdds		Odds for a PassAssigned bet
//		Place			Place bets on a number
//		

BetType::BetType(void) {
}

int BetType::Check(int roll){

	std::cout << "BetType::Check Begin " << std::endl;

  std::cout << "BetType::Check Begin Calling CheckWinner" << std::endl;

  CheckWinner(roll);

  return retGood;
}

int BetType::CheckWinner(int roll) {

	std::cout << "BetType::CheckWinner Begin " << std::endl;

  return retBad;
}

