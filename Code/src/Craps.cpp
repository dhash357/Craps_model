#include <iostream>
#include "../h/Dice.h"
#include "../h/Bet.h"
#include "../h/PassLine.h"


int main() {
	int value1;
	int value2;
	int total; 
	int retVal;

	Bet bet(5, btPassLine);

	Dice die(6);

	value1 = die.Roll();
	value2 = die.Roll();

	total = value1 + value2;

	std::cout << "Value1 = " << value1 << std::endl;
	std::cout << "Value2 = " << value2 << std::endl;
	std::cout << "Total = " << total << std::endl;

	retVal = bet.BetCheck(total);

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
			break;
	}

	return (0);
};	// main
