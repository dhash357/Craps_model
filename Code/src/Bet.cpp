#include <iostream>

#include "../h/Bet.h"
#include "../h/Pass.h"
#include "../h/PassLine.h"
#include "../h/Odds.h"
#include "../h/Dice.h"

// This is the code for the class bet

//	Class 		Bet
//
//	Description	Bet is the class that defines each individual bet. Each bet will
//				be stored in a BetList

/**
* Name: Bet
*   
* Prototype: Bet(void)
* 
* Desc: Constructor for Bet class. This one is for bets which are not attached to a particular number
* 
* Param: 
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

}   //	Bet;

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

	CreateBetType();

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

    CreateBetType();

};  //	Bet::Bet


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
 * Name: GetBetType
 *
 * Prototype: int GetGetBetType (void)
 * 
 * Desc: Returns the betType in a string stored in the betstr structure (Pass, Pass Line)
 * 
 * Param:   None
 * 
 * Create Date: 22/01/18
 * Create By:   DJH
 * 
 * Modification:
 * 22/01/18 DJH Created
 * 
 */ 
std::string Bet::GetBetType (void){

    std::string retVal;

    switch (GetBetTypeId())
    {

    case btPassLine:
        retVal = "Pass Line";
        break;
    
    case btComeLine:
        retVal = "Come Line";
        break;
    
    case btPass:
        retVal = "Pass";
        break;
    
    case btCome:
        retVal = "Come";
        break;
    
    case btOdds:
        retVal = "Odds";
        break;
    
    case btField:
        retVal = "Field";
        break;
    
    case btOneTime:
        retVal = "One Time";
        break;
    
    case btHardways:
        retVal = "Hardway";
        break;
    
    case btPlace:
        retVal = "Place";
        break;
    
    default:
        retVal = "Unknown Bet Type";
        break;
    }
    
    return retVal;
}   // GetBetTypeId

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

std::cout << " Bet::CreateBetType Begin " << "\n";

	switch (betstr.betTypeId){
		case btPassLine:
		{
			betType = std::make_shared<PassLine>(betstr.amount);
std::cout << " Bet::CreateBetType Begin btPassLine = " << &betType << "\n";


//			if (!betType) {
//				std::cout << "betType was not created" << std::endl;
//			}

//			betType = new PassLine();
			break;
		}
		case btComeLine:
			break;
		case btPass:
			betType = std::make_shared<Pass>(betstr.amount, betstr.betNum);
std::cout << " Bet::CreateBetType Begin btPass" << "\n";


//			if (!betType) {
//				std::cout << "betType was not created" << std::endl;
//			}

//			betType = new PassLine();

			break;
		case btCome:
			break;

		case btOdds:
			betType = std::make_shared<Odds>(betstr.amount, betstr.betNum);
std::cout << " Bet::CreateBetType Begin btOdds" << "\n";


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
int Bet::BetCheck(sRoll roll){
	int checkRet;

	std::cout << "Bet::BetCheck Begin " << std::endl;

// 220119 I was checking the bet in the BetType. I am going to try to put that code in Bet and call virtual Winner from Bet
//	checkRet = betType->Check(roll);

    checkRet = Check(betType, roll);

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

/**
 * Name: Check
 *
 * Prototype: int Check (std::shared_ptr<BetType>, sRoll)
 * 
 * Desc: Check to see if this BetType with this roll is a Loser, Winner or needs to be Assigned to another BetType
 * 
 * Param:   std::shared_ptr<BetType> ptr    Pointer to the actual type of bet. Each bet inherited from BetType will have its own Check  
 *          sRoll   roll	                Roll of the dice
 * 
 * Create Date: 22/01/17
 * Create By:   DJH
 * 
 * Modification:
 * 220117 DJH Created
 * 
 */ 
int Bet::Check(std::shared_ptr<BetType> ptr, sRoll roll)
{
    int retVal = retNotFound;
    int winAmt = 0.0;

    std::cout << "Bet::Check Begin \n";

    std::tie(retVal, winAmt) = ptr->Winner(roll);

    // If Winner was found return to calling program the return value for Winner
    if (retVal == retFound)
    {
// STOPPED HERE  220120 Need to deal with returning the winning amount and pass it back to calling routine BetCheck        
        retVal = retWinner;
    }

    // If the retVal is still retNotFound then there was nothing found from the winner 
    // method so we need to keep going. 
    if (retVal == retNotFound)
    {
        retVal = ptr->Loser(roll);

        // If Loser was found return to calling program the return value for loser
        if (retVal == retFound)
        {
            retVal = retLoser;
        }

    } // if statement
  
    if (retVal == retNotFound)
    {
        retVal = ptr->Assign(roll);

    }

    return retVal;

}   // Check