#include <deque>
#include <algorithm>          // Needed for find
#include <stdio.h>
#include <iostream>
#include "../h/BetList.h"
#include "../h/Bet.h"
#include "../h/Craps.h"


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

    std::cout << "BetList::BetList() " << std::endl;

    // Just for testing load fake data into the vector
//    void LoadData(std::vector<Bet>& bets);
    LoadData();

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
//    std::vector<Bet>::size_type i;

std::cout << "BetList::CheckBet()\n";

//std::cout << "BetList Size " << bets.size() << std::endl;

/*
    for (i = 0; i < bets.size(); i++){
        std::cout << " Bet " << i << std::endl;
        std::cout << "     Amount " << bets[i].GetAmount() << std::endl;
        std::cout << "     Type " << bets[i].GetBetTypeId() << std::endl;
        std::cout << "     Number " << bets[i].GetBetNum() << std::endl;
    }
*/

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
int BetList::Add(Bet bet) 
{
	int retVal = retGood;	// Assume return good value

	this->bets.push_back(bet);

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

std::deque<Bet>::iterator BetList::FindBet(sBet betCrit)
{
	std::deque<Bet>::iterator begin;
	std::deque<Bet>::iterator end;
	
	std::deque<Bet>::iterator it;

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
//void BetList::LoadData(std::vector<Bet>& newBetList)
void BetList::LoadData()
{
    int retVal = 0;
    
/*
    This works just generic int in the array
  std::vector<int> sites;
  sites.push_back(5);
  for(int x = 0; x < sites.size(); x++){
    std::cout << sites[x];
  }
  std::cout << std::endl;
*/ 

    std::cout << "BetList::LoadData" << std::endl;
    Bet bet1(5, btPass, 4);
    std::cout << " bet1 amount " << bet1.GetAmount() << std::endl;
    std::cout << " Address of bet1 " << &bet1 << std::endl;
    bets.push_back(bet1);
    std::cout << " Address of bets[0] " << &bets[0] << std::endl;

    std::cout << " First Bet Amount " << bets[0].GetAmount() << std::endl;
//    Add(bet1);
//    retVal = Add(bet1);

 
//    Bet *bet1 = new Bet;
//    bet1->SetBetStr(5, btPass, 4);
//    bets.push_back(std::move(*bet1));
 
/*
    Bet bet2(10, btOdds, 4);
    this->bets.push_back(std::move(bet2));
    Bet bet3(15, btCome, 6);
    this->bets.push_back(std::move(bet3));
    Bet bet4(25, btOdds, 6);
    this->bets.push_back(std::move(bet4));
    Bet bet5(55, btComeLine);
    this->bets.push_back(std::move(bet5));
*/
    if (retVal != 0){
        std::cout << "Error in load data\n";
    }

}   // loadData