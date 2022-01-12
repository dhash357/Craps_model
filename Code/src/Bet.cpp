#include <iostream>
#include <memory>
#include <utility>

#include <typeinfo>		// Remove only for testing
#include <string>		// Remove only for testing

#include "../h/Bet.h"
#include "../h/Craps.h"
#include "../h/BetType.h"
#include "../h/PassLine.h"
#include "../h/Pass.h"
#include "../h/Odds.h"

// This is the code for the class bet

//	Class 		Bet
//
//	Description	Bet is the class that defines each individual bet. Each bet will
//				be stored in a BetList

/**
* Name: Bet
*   
* Prototype: Bet(int, int)
* 
* Desc: Constructor for Bet class. This one is for bets which are not attached to a particular number
* 
* Param: int amt - Amount of the bet in dollars
*        int bt - betTypeId is the type of bet. Defined in craps.h
*
* Return:  
* 
* Create Date: 21/12/29
* Create By: David Hash  
* 
* Modification:
*   21/12/29   DJH    Created
* 
*/
Bet::Bet() {
	betstr.amount = 0;
	betstr.betTypeId = 0;
    betstr.betNum = 0;      // There is no bet number for some bets

}
//	Bet;

Bet::Bet(const Bet& other){

}
/**
* Name: Bet
*   
* Prototype: Bet(int, int)
* 
* Desc: Constructor for Bet class. This one is for bets which are not attached to a particular number
* 
* Param: int amt - Amount of the bet in dollars
*        int bt - betTypeId is the type of bet. Defined in craps.h
*
* Return:  
* 
* Create Date: 21/12/24
* Create By: David Hash  
* 
* Modification:
*   21/12/24   DJH    Created
* 
*/
Bet::Bet(int amt, int bt) {
	betstr.amount = amt;
	betstr.betTypeId = bt;
    betstr.betNum = 0;      // There is no bet number for some bets
//	CreateBetType();

};

/**
* Name: Bet
*   
* Prototype: Bet(int, int, int)
* 
* Desc: Constructor for Bet class. This one is for bets which are not attached to a particular number
* 
* Param: int amt - Amount of the bet in dollars
*        int bt - betTypeId is the type of bet. Defined in craps.h
*        int bn - betNum is the number that this bet is associated with
*
* Return:  
* 
* Create Date: 21/12/24
* Create By: David Hash  
* 
* Modification:
*   21/12/24   DJH    Created
* 
*/
Bet::Bet(int amt, int bt, int bn) {
	betstr.amount = amt;
	betstr.betTypeId = bt;
    betstr.betNum = bn;      

    std::cout << "Bet::Bet " << betstr.amount << std::endl;

};  //	Bet::Bet


/**
* Name: Bet
*   
* Prototype: ~Bet(int, int, int)
* 
* Desc: Constructor for Bet class. This one is for bets which are not attached to a particular number
* 
* Param: int amt - Amount of the bet in dollars
*        int bt - betTypeId is the type of bet. Defined in craps.h
*        int bn - betNum is the number that this bet is associated with
*
* Return:  
* 
* Create Date: 21/12/24
* Create By: David Hash  
* 
* Modification:
*   21/12/24   DJH    Created
* 
*/
Bet::~Bet() {
};  //	Bet::~Bet

/**
 * Name: GetAmount
 *
 * Prototype: int GetAmount (void)
 * 
 * Desc: Returns the Amount stored in the betstr structure
 * 
 * Param:   None
 * 
 * Create Date: 21/12/22
 * Create By:   DJH
 * 
 * Modification:
 * 21/12/22 DJH Created
 * 
 */ 
int Bet::GetAmount (void){
    return betstr.amount;
}   // GetAmount

/**
 * Name: GetBetTypeId
 *
 * Prototype: int GetGetBetTypeId (void)
 * 
 * Desc: Returns the betTypeId stored in the betstr structure
 * 
 * Param:   None
 * 
 * Create Date: 21/12/22
 * Create By:   DJH
 * 
 * Modification:
 * 21/12/22 DJH Created
 * 
 */ 
int Bet::GetBetTypeId (void){
    return betstr.betTypeId;
}   // GetBetTypeId

/**
 * Name: GetBetNum
 *
 * Prototype: int GetBetNum (void)
 * 
 * Desc: Returns the betNum stored in the betstr structure
 * 
 * Param:   None
 * 
 * Create Date: 21/12/22
 * Create By:   DJH
 * 
 * Modification:
 * 21/12/22 DJH Created
 * 
 */ 
int Bet::GetBetNum (void){
    return betstr.betNum;
}   // GetBetTypeId

/**
 * Name: SetBetStr
 *
 * Prototype: void SetBetStr (void)
 * 
 * Desc: This function loads the betStr with variables. Sets the amt (Bet Amount), 
 *          bt (Bet Type) and, bn (Bet Number)
 * 
 * Param:   None
 * 
 * Create Date: 22/01/10
 * Create By:   DJH
 * 
 * Modification:
 * 22/01/10 DJH Created
 * 
 */ 

int Bet::SetBetStr (int amt, int bt, int bn){
    int retVal = retGood;

	betstr.amount = amt;
	betstr.betTypeId = bt;
    betstr.betNum = bn;     

    return retVal; 
}
/**
 * Name: CreateBetType
 *
 * Prototype: void CreateBetType (void)
 * 
 * Desc: Creates a BetType based on betTypeId. This is loaded into betType 
 * 
 * Param:   None
 * 
 * Create Date: 21/11/18
 * Create By:   DJH
 * 
 * Modification:
 * 21/11/18 DJH Created
 * 
 */ 

int Bet::CreateBetType(void){
	int ret = retGood;
	
	switch (betstr.betTypeId){
		case btPassLine:
		{
			betType = std::make_unique<PassLine>(betstr.amount);
std::cout << " Bet::CreateBetType Begin btPassLine" << std::endl;


//			if (!betType) {
//				std::cout << "betType was not created" << std::endl;
//			}

//			betType = new PassLine();
			break;
		}
		case btComeLine:
			break;
		case btPass:
			betType = std::make_unique<Pass>(betstr.amount, betstr.betNum);
std::cout << " Bet::CreateBetType Begin btPass" << std::endl;


//			if (!betType) {
//				std::cout << "betType was not created" << std::endl;
//			}

//			betType = new PassLine();

			break;
		case btCome:
			break;

		case btOdds:
			betType = std::make_unique<Odds>(betstr.amount, betstr.betNum);
std::cout << " Bet::CreateBetType Begin btOdds" << std::endl;


//			if (!betType) {
//				std::cout << "betType was not created" << std::endl;
//			}

//			betType = new PassLine();

			break;
		case btField:
			break;
		case btOneTime:
			break;
		case btHardways:
			break;
		case btPlace:
			break;
		default:
			ret = retBad;
			break;
// TODO 21/11/18 Work on error/exception checking. I would like to start by returning a none 0 here if the default is hit. 
// 				 I want to find a way to do exceptions in the entire app			
	}	// Switch

	return ret;
}	// CreateBetType

/**
 * Name: BetCheck
 *
 * Prototype: int BetCheck (int roll, int amount)
 * 
 * Desc: Check this bet to see if it is a Loser, Winner or needs to be Changed to another BetType
 * 
 * Param:   int roll	Roll of the dice
 * 			int amount	The amount of this Bet
 * 
 * Create Date: 21/11/18
 * Create By:   DJH
 * 
 * Modification:
 * 
 */ 
int Bet::BetCheck(int roll){
	int checkRet;

	std::cout << "Bet::BetCheck Begin " << std::endl;

	checkRet = betType->Check(roll);

	if (checkRet > 0){
		win = checkRet;			// assign the winning amount from checking roll to the win variable
		action = betActDel;		// bet won bet is over delete it before next roll
	} else if (checkRet < 0){
		loss = checkRet;		// assign the loss amount from checking roll to loss variable
		action = betActDel;		// bet lost bet is over delete it before next roll
	} else {
		action = betActNone;	// No action bet continues
	}

// TODO DJH 211118 deal with return from checks

	std::cout << "Bet::BetCheck after check. ret = " << checkRet << std::endl;
	std::cout << "Bet win = " << win << std::endl;
	std::cout << "Bet loss = " << loss << std::endl;
	std::cout << "Action = " << action << std::endl;


	return (checkRet);
}	// BetCheck