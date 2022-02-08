#include <iostream>
#include <vector>
#include <algorithm>          // Needed for find
#include <tuple>
#include "../h/BetType.h"
#include "../h/Craps.h"
#include "../h/Dice.h"

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

BetType::BetType(int amt, sRoll roll){
} // BetType(int, int)

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
 * TODO: 22/01/18 DJH need to think about this for things like hardways where it depends on each die and not the total
 */ 
int BetType::CheckVector(std::vector<int> vec, sRoll roll){
    int retVal;             // Return value of method
std::cout << "BetType::CheckVector Begin" << std::endl;
    // Iterator used to store the position 
    // of searched element
    std::vector<int>::iterator it;

    // Determine if the roll was in the vector of winning numbers
    it = find(vec.begin(), vec.end(), roll.total);
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
// Temp for testing of virtual function
std::tuple <int, float> BetType::Winner(sRoll roll)
{
    // TODO 220120 Create some message passing object that will report this. 
    std::cout << "BetType::Winner \n";
    return std::make_tuple(retBad, 0.0);  // Return Bad this should never run so if it does it is a Bad return value
}   //  Winner

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
int BetType::Loser(sRoll roll) {

    // TODO 220120 Create some message passing object that will report this. 
    std::cout << "BetType::Winner \n";
    return retBad;  // Return Bad this should never run so if it does it is a Bad return value
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
int BetType::Assign(sRoll roll) {

    // TODO 220120 Create some message passing object that will report this. 
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
//
//int BetType::CalculateWin(){
//    int retVal;   // Amount of the winnings
//
//    retVal = amount * oddsN / oddsD;
//
//std::cout << "BetType::CalculateWin : Winning amount = " << retVal << std::endl;
//
//    return retVal;
//} // CalculateWin


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