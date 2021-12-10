#include <vector>
#include <algorithm>          // Needed for find
#include <stdio.h>
#include "../h/BetList.h"
#include "../h/Bet.h"
#include "../h/Craps.h"

Bet bet1(5, btPass, 4);
Bet bet2(25, btOdds, 4);
Bet bet3(5, btCome, 6);
Bet bet4(25, btOdds, 6);
Bet bet5(5, btComeLine, 0);


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
std::vector<Bet>::iterator BetList::FindBet(sBet betCrit)
{
	std::vector<Bet>::iterator begin;
	std::vector<Bet>::iterator end;
	
	std::vector<Bet>::iterator it;

//https://stackoverflow.com/questions/16798535/finding-an-element-in-a-vector-of-structures
//https://thispointer.com/using-stdfind-stdfind_if-with-user-defined-classes/
//https://stackoverflow.com/questions/22660448/using-predicate-in-find-if

    std::vector<Bet> bets;
	begin = bets.begin();
	end = bets.end();

std::string username = "Nicholas";    
std::find_if(userlist.begin(), userlist.end(), [username](Nick const& n){
    return n.username == username;
});

std::find_if(begin, 
             end, 
             [&cb = bet]
             (const sBet& betCrit) -> bool { 
				 if ((cb.betstr.amount == betCrit.amount) &&
				     (cb.betstr.betTypeId == betCrit.betTypeId) &&
					 (cb.betstr.betNum == betCrit.betNum))
					 {return true;}
				 else
				 	{return false;}						// Amount of money for this bet
             }); 


}   // FindBet
// Junk function for testing
void loadData(void)
{
    Bet bet1(5, btPass, 4);
    Bet bet2(25, btOdds, 4);
    Bet bet3(5, btCome, 6);
    Bet bet4(25, btOdds, 6);
    Bet bet5(5, btComeLine, 0);


}   // loadData