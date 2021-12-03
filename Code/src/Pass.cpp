#include <iostream>
#include "../h/Pass.h"
#include "../h/Craps.h"


/**
 * Name: Pass
 *
 * Prototype: int Pass (void)
 * 
 * Desc: Constructor for the BetType Pass
 * 
 * Param:   None
 * 
 * Create Date: 21/11/22
 * Create By:   DJH
 * 
 * Modification:
 * 211122 DJH Created
 * 
 */ 

Pass::Pass(int amt, int num) {

    // There are only 6 numbers for 'num'. They are {4 5 6 8 9 10}

    // Set Winning numbers into a vector
    winner.push_back(num);

    // Set Losing numbers into a vector
    loser.push_back(7);

    // Set Values for calculating odds
    // This is the pass line bet so the odds are 1:1
    oddsN = 1;
    oddsD = 1;

    amount = amt;


}   // Pass::Pass

/**
 * Name: Assign
 *
 * Prototype: int Assign (int roll)
 * 
 * Desc: This is a place holder only. The child will contain the real code
 *       to determine if the bet needs to be Assign
 * 
 * Param:   int roll	Roll of the dice
 * 
 * Create Date: 21/11/17
 * Create By:   DJH
 * 
 * Modification:
 * 211117 DJH Created
 * 
 *
 */
int Pass::Assign(int roll) {

    int retVal;             // Return value of method

std::cout << "Pass::Assign Begin : Assign current bet to another BetType" << std::endl;

      // Check to see if the roll is in the vector winner
    retVal = CheckVector(loser, roll);

    if (retVal == retFound){
        

    }


  return retVal;
} // Assign

