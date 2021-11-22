#include <iostream>
#include <memory>
#include <utility>

#include <typeinfo>		// Remove only for testing
#include <string>		// Remove only for testing

#include "../h/Bet.h"
#include "../h/Craps.h"
#include "../h/BetType.h"
#include "../h/PassLine.h"

// This is the code for the class bet

//	Class 		Bet
//
//	Description	Bet is the class that defines each individual bet. Each bet will
//				be stored in a BetList

Bet::Bet(int amt, int bt) {
	amount = amt;
	betTypeId = bt;

	CreateBetType();

};


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
	
	switch (betTypeId){
		case btPassLine:
		{
			betType = std::make_unique<PassLine>(amount);
//			betType = PassLine();
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
			break;
		case btCome:
			break;
		case btOdds:
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