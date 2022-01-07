#include <vector>
#include <algorithm>          // Needed for find
#include <stdio.h>
#include <iostream>
#include "../h/BetList.h"
#include "../h/Bet.h"
#include "../h/Craps.h"

/*
Bet bet1(5, btPass, 4);
Bet bet2(25, btOdds, 4);
Bet bet3(5, btCome, 6);
Bet bet4(25, btOdds, 6);
Bet bet5(5, btComeLine, 0);
*/

/**
 * Name: BetList
 *
 * Prototype: BetList();
 * 
 * Desc: BetList is a standard list of class Bet. This list contains
 *			all of the Bets that are currently on the table for the current 
 *			player
 * 
 * Param: void
 *
 * Return: void
 * 
 * Create Date:	21/12/08
 * Create By: David Hash
 * 
 * Modification:
 *	21/12/08	DJH		Created
 * 
 */ 
//inline BetList::BetList(){
BetList::BetList() {


    // Just for testing load fake data into the vector
    void LoadData(std::vector<Bet>& bets);

}

/**
 * Name: ~BetList
 *
 * Prototype: ~BetList(void);
 * 
 * Desc: Generic Destructor of the BetList class
 * 
 * Param: void
 *
 * Return: void
 * 
 * Create Date:	21/12/29
 * Create By: David Hash
 * 
 * Modification:
 *	21/12/29	DJH		Created
 * 
 */ 
//inline BetList::BetList(){
BetList::~BetList() {
}   // ~BetList

/**
* Name:	CheckBet
*
* Prototype: int 
* 
* Desc: Loop thru all bets in the vector to determine what needs to happen with each. 
*		Winner, Loser, Reassign
* 
* Param:   void
*
* Return:  int Return if function worked or failed
* 
* Create Date: 21/12/08
* Create By:   David Hash
* 
* Modification:
*	21/12/08	DJH		Created
* 
*/
int BetList::CheckBet()
{
	int retVal = retGood;	// Assume return good value

std::cout << "BetList::CheckBet()\n";

	return (retVal);
}	//	BetList::ChekcBet

/**
* Name:	Add 
*
* Prototype: int Add(Bet) 
* 
* Desc: Add a Bet to the vector. This is actually the process of placing or
*		reassigning a Bet on the table 
* 
* Param: Bet - The bet to be added
*
* Return: Generic return value. Did the method process without error or did it have an error
* 
* Create Date: 21/12/08
* Create By: David Hash
* 
* Modification:
*	21/12/08	DJH		Created
*
* 
*/
int BetList::Add(const Bet& bet) 
{
	int retVal = retGood;	// Assume return good value

//	bets.push_back(bet);

	return (retVal);
}	// BetList::Add

/**
* Name:	FindBet 
*
* Prototype: int FindBet(bet)
* 
* Desc: find a specific bet in the vector of bets
* 
* Param: bet - Vector of bets currently on the table
*
* Return: iterator it if found: null if not found
* 
* Create Date: 21/12/08
* Create By: David Hash  
* 
* Modification:
*   21/12/08   DJH    Created
* 
*/

std::vector<Bet>::iterator BetList::FindBet(sBet betCrit)
{
	std::vector<Bet>::iterator begin;
	std::vector<Bet>::iterator end;
	
	std::vector<Bet>::iterator it;

//https://stackoverflow.com/questions/16798535/finding-an-element-in-a-vector-of-structures
//https://thispointer.com/using-stdfind-stdfind_if-with-user-defined-classes/
//https://stackoverflow.com/questions/22660448/using-predicate-in-find-if

//    std::vector<Bet> bets;
	begin = bets.begin();
	end = bets.end();

// find_if uses a Lambda function to do the find. 
//          betCrit is passed in by capture
//          bets is passed in by reference
/*
    it = std::find_if(begin, 
             end, 
             [betCrit]
             (const Bet& bets) -> bool { 
				 if ((bets.GetAmount() == betCrit.amount) &&
				     (bets.GetBetTypeId() == betCrit.betTypeId) &&
					 (bets.GetBetNum() == betCrit.betNum))
					 {return true;}
				 else
				 	{return false;}						// Amount of money for this bet
             }); 
*/
    it = std::find_if(begin, 
             end, 
             [betCrit]
             (Bet& b) -> bool { 
				 if ((b.GetAmount() == betCrit.amount) &&
				     (b.GetBetTypeId() == betCrit.betTypeId) &&
					 (b.GetBetNum() == betCrit.betNum))
					 {return true;}
				 else
				 	{return false;}						// Amount of money for this bet
             }); 

    return it;
}   // FindBet




// Junk function for testing
void BetList::LoadData(std::vector<Bet>& newBetList)
{
    int retVal = 0;
    
    Bet bet1(5, btPass, 4);
    bets.push_back(bet1);
 //   retVal = Add(bet1);
 /*
    Bet bet2(25, btOdds, 4);
    retVal = Add(bet2);
    Bet bet3(5, btCome, 6);
    retVal = Add(bet3);
    Bet bet4(25, btOdds, 6);
    retVal = Add(bet4);
    Bet bet5(5, btComeLine);
    retVal = Add(bet5);
*/
    if (retVal != 0){
        std::cout << "Error in load data\n";
    }

}   // loadData