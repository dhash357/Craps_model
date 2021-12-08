#include <vector>
#include <algorithm>          // Needed for find

#include "../h/BetList.h"
#include "../h/Bet.h"

/**
 * Name: BetList
 *
 * Prototype: inline BetList();
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

inline BetList::BetList() {

	std::vector<Bet>	bets;

}

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

	bets.push_back(bet);

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
std::vector<Bet>::iterator BetList::FindBet(Bet bet)
{
	std::vector<Bet>::iterator it2;

//https://stackoverflow.com/questions/16798535/finding-an-element-in-a-vector-of-structures
//	it2 = std::find_if(this->bets.begin(), this->bets.end(), [](bets){
//                                                                                            if (val % 3 == 0)
//                                                                                                return true;
//                                                                                            return false;});

}	// FindBet