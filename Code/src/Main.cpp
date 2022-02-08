#include <iostream>
#include "../h/Craps.h"
#include "../h/Dice.h"
#include "../h/BetList.h"
#include "../h/PassLine.h"

int main() {
    Craps craps;
    sRoll roll;
//	int value1;
//	int value2;
//	int total; 
	int retVal = retGood;


std::cout << "This is the first words out of the app!" << std::endl;

    BetList listOfBets;



    // Place bets

    // Roll the dice.
    craps.Roll();

    // Check Bets for results; Win, Lose, Place new bet
    listOfBets.CheckBet(craps.GetRoll());
    
/*	std::cout << "Value1 = " << value1 << std::endl;
	std::cout << "Value2 = " << value2 << std::endl;
	std::cout << "Total = " << total << std::endl;



	switch (retVal)
	{
		case retWinner:
			std::cout << total << " is a winner." << std::endl;
			break;
	
		case retLoser:
			std::cout << total << " is a loser." << std::endl;
			break;
		
		case retAssign:
			std::cout << total << " is reAssigned." << std::endl;
			break;
		
		default:
			std::cout << total << " retVal " << retVal << " was not found." << std::endl;
			break;
	}
*/


	return retVal;
};	// main

