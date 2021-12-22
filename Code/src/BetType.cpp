#include <iostream>
#include <vector>
#include <algorithm>          // Needed for find
#include "../h/BetType.h"
#include "../h/Craps.h"

/** Class BetType
  * 
  * Description	BetType is the type of each bet and all of the details 
  *				about that specific bet.
  * 
  *  Types
  *		Come			Bets on the Come line unassigned to a number
  *		ComeAssigned	Come bets that are assigned to a number
  *		ComeOdds		Odds for a ComeAssigned bet
  *  	Pass			Bets on the Pass line unassigned to a number
  *		PassAssigned	Pass bets that are assigned to a number
  *		PassOdds		Odds for a PassAssigned bet
  *		Place			Place bets on a number
  */ 

/**
 * Name: BetType
 *
 * Prototype: BetType (void)
 * 
 * Desc: Constructor for BetType
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

BetType::BetType(void) {
} // BetType(void)

BetType::BetType(int amt){
} // BetType(int)

BetType::BetType(int amt, int num){
} // BetType(int, int)

/**
 * Name: Check
 *
 * Prototype: int Check (int roll)
 * 
 * Desc: Check to see if this BetType with this roll is a Loser, Winner or needs to be Assigned to another BetType
 * 
 * Param:   int roll	Roll of the dice
 * 
 * Create Date: 21/11/17
 * Create By:   DJH
 * 
 * Modification:
 * 211117 DJH Created
 * 
 */ 
int BetType::Check(int roll){
    int retVal = retNotFound;

    std::cout << "BetType::Check Begin " << std::endl;

    retVal = Winner(roll);

    // If Winner was found return to calling program the return value for Winner
    if (retVal == retFound){
        retVal = retWinner;
    }

    // If the retVal is still retNotFound then there was nothing found from the winner 
    // method so we need to keep going. 
    if (retVal == retNotFound){
        retVal = Loser(roll);

        // If Loser was found return to calling program the return value for loser
        if (retVal == retFound){
            retVal = 3;
        }

    } // if statement
  
    return retVal;
} // Check

/**
 * Name: CheckVector
 *
 * Prototype: int CheckVector (std::vector<int> vec, int value)
 * 
 * Desc: This is a place holder only. The child will contain the real code
 *       to determine if the bet needs to be Assign
 * 
 * Param: std::vector<int> vec  Vector of int to be searched  
 *        int value	Value to be found in the vecRoll of the dice
 * 
 * Create Date: 21/11/17
 * Create By:   DJH
 * 
 * Modification:
 * 211117 DJH Created
 * 
 */ 
int BetType::CheckVector(std::vector<int> vec, int value){
    int retVal;             // Return value of method
std::cout << "BetType::CheckVector Begin" << std::endl;
    // Iterator used to store the position 
    // of searched element
    std::vector<int>::iterator it;

    // Determine if the roll was in the vector of winning numbers
    it = find(vec.begin(), vec.end(), value);
    // if the position is not equal to the end then it was found and is a winner
    if (it != vec.end())
    {

        retVal = retFound;
    } else {
        retVal = retNotFound;
    }

    return retVal;

}   // CheckVector

/**
 * Name: Winner
 *
 * Prototype: int Winner (int roll)
 * 
 * Desc: This is a place holder only. The child will contain the real code
 *       to determine the Winner
 * 
 * Param:   int roll	Roll of the dice
 * 
 * Create Date: 21/11/17
 * Create By:   DJH
 * 
 * Modification:
 * 211117 DJH Created
 * 
 */ 
int BetType::Winner(int roll) {

    int retVal;             // Return value of method

std::cout << "Pass::Winner Begin " << std::endl;

    // Check to see if the roll is in the vector winner
    retVal = CheckVector(winner, roll);

std::cout << "Pass:Winner End Return " << retVal << std::endl;

    // If the roll was found in the vector of winner This is a win
    // Calculate the actual winnings. Assign the winnings to the retVal 
    // to pass back to the Bet
    if (retVal == retFound){

std::cout << "Pass::Winner call CalculateWin " << std::endl;
       
        retVal = CalculateWin();
std::cout << "Pass::Winner return CalculateWin " << retVal << std::endl;
    }

std::cout << "  Winnings = " << retVal << std::endl;

    // Return the win amount if found
    // Return constant retNotFound if the roll was not found in winner array
    return retVal;

} // Winner

/**
 * Name: Loser
 *
 * Prototype: int Loser (int roll)
 * 
 * Desc: This is a place holder only. The child will contain the real code
 *       to determine the Loser
 * 
 * Param:   int roll	Roll of the dice
 * 
 * Create Date: 21/11/17
 * Create By:   DJH
 * 
 * Modification:
 * 211117 DJH Created
 * 
 */ 
int BetType::Loser(int roll) {
    int retVal;             // Return value from methods called; 

std::cout << "PassLine::Loser Begin " << std::endl;

    // Check to see if the roll is in the vector winner
    retVal = CheckVector(loser, roll);

    if (retVal == retFound){
      retVal = amount * -1;   // The losing amount is the amount of the bet
    }

std::cout << "  Losing amount = " << retVal << std::endl;

    // Return the loss amount if found
    // Return constant retNotFound if the roll was not found in loser array
    return retVal;

} // Loser

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
int BetType::Assign(int roll) {

  std::cout << "BetType::Assign Begin : This should never be called method is not devined in actual BetType" << std::endl;

  return retBad;
} // Assign


/**
 * Name: CalculateWiin
 *
 * Prototype: virtual int CalculateWin();
 * 
 * Desc: This method is used to calculate the amount of the win for each BetType
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

int BetType::CalculateWin(){
    int retVal;   // Amount of the winnings

    retVal = amount * oddsN / oddsD;

std::cout << "BetType::CalculateWin : Winning amount = " << retVal << std::endl;

    return retVal;
} // CalculateWin


////////////////////////////////////////////////////////////////////////////////////
// Debug scripts
////////////////////////////////////////////////////////////////////////////////////

void BetType::PrintVector(std::vector<int> vec){

  std::vector<int>::iterator it;
 
  std::cout << "BetType::PrintVector vec list " ;      
  for (it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << "  ";
  }
  std::cout << std::endl << "End list" << std::endl;      

}