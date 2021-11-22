#include <iostream>
#include "../h/PassLine.h"
#include "../h/Craps.h"


/**
 * Name: PassLine
 *
 * Prototype: int PassLine (void)
 * 
 * Desc: Constructor for the BetType PassLine
 * 
 * Param:   None
 * 
 * Create Date: 21/11/17
 * Create By:   DJH
 * 
 * Modification:
 * 211117 DJH Created
 * 
 */ 

PassLine::PassLine(int amt) {

    // Set Winning numbers into a vector
    winner.push_back(7);
    winner.push_back(11);

    // Set Losing numbers into a vector
    loser.push_back(2);
    loser.push_back(3);
    loser.push_back(12);

    // Set numbers to be reAssigned into a vector
    assign.push_back(4);
    assign.push_back(5);
    assign.push_back(6);
    assign.push_back(8);
    assign.push_back(9);
    assign.push_back(10);

    // Set Values for calculating odds
    // This is the pass line bet so the odds are 1:1
    oddsN = 1;
    oddsD = 1;

    amount = amt;


}   // PassLine::PassLine


/**
 * Name: Winner
 *
 * Prototype: virtual int Winner (int)
 * 
 * Desc: Winner is used to determine if the roll is a winner
 * 
 * Param:   int roll    Roll of the dice
 * 
 * Create Date: 21/11/17
 * Create By:   DJH
 * 
 * Modification:
 * 211117 DJH Created
 * 
 */ 
int PassLine::Winner(int roll){
    int retVal;             // Return value of method

   	std::cout << "PassLine::Winner Begin " << std::endl;

    // Check to see if the roll is in the vector winner
    retVal = CheckVector(winner, roll);

   	std::cout << "PassLine::Winner End Return " << retVal << std::endl;

	// If the roll was found in the vector of winner This is a win
    // Calculate the actual winnings. Assign the winnings to the retVal 
    // to pass back to the Bet
    if (retVal == retFound){

    	std::cout << "PassLine::Winner call CalculateWin " << std::endl;
       
    	retVal = CalculateWin();
    	std::cout << "PassLine::Winner return CalculateWin " << retVal << std::endl;
    }

   	std::cout << "  Winnings = " << retVal << std::endl;

    return retVal;
}   // Winner

/**
 * Name: Loser
 *
 * Prototype: virtual int Loser (int)
 * 
 * Desc: Loser is used to determine if the roll is a loser
 * 
 * Param:   int roll    Roll of the dice
 * 
 * Create Date: 21/11/17
 * Create By:   DJH
 * 
 * Modification:
 * 211117 DJH Created
 * 
 */ 
int PassLine::Loser(int roll){
    int retVal;             // Return value of method

   	std::cout << "PassLine::Loser Begin " << std::endl;

    // Check to see if the roll is in the vector winner
    retVal = CheckVector(loser, roll);

    if (retVal == retFound){
    	retVal = amount * -1;   // The losing amount is the amount of the bet
    }

   	std::cout << "  Losing amount = " << retVal << std::endl;

    return retVal;
}   // Loser

