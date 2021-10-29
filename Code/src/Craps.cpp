#include <iostream>
#include "/workspaces/Craps_model/Code/h/Dice.h"


int main() {
	int value1;
	int value2;
	int total; 

	Dice die(6);

	value1 = die.Roll();
	value2 = die.Roll();

	total = value1 + value2;

	std::cout << "Value1 = " << value1 << std::endl;
	std::cout << "Value2 = " << value2 << std::endl;
	std::cout << "Total = " << total << std::endl;


	return (0);
};	// main
