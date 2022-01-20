#include <vector>
#include <iostream>
#include <algorithm>          // Needed for find

#include "../h/BetList.h"
#include "../h/Dice.h"


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
    LoadData();

}

/**
 * Name: Add
 *
 * Prototype: Add(Bet);
 * 
 * Desc: Add is used to add a bet to the current list of bets
 * 
 * Param: Bet bet   bet to be added to the vector of bets which makes up betList
 * 
 * Return: int  retGood or retBad
 * 
 * Create Date:	21/12/08
 * Create By: David Hash
 * 
 * Modification:
 *	21/12/08	DJH		Created
 * 
 */ 
int BetList::Add(Bet bet) 
{
	int retVal = retGood;	// Assume return good value
std::cout << " BetList::Add Begin " << "\n";

	bets.push_back(bet);

	return (retVal);
}	// BetList::Add

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
int BetList::CheckBet(sRoll roll)
{
	int retVal = retGood;	// Assume return good value

std::cout << "BetList::CheckBet()\n";

    PrintBets();

    int size;       // Size of the vector of bets
    int i;          // Index value

    size = bets.size();

    for (i = 0; i < size; i++)
    {
        bets[i].BetCheck(roll);
    }


	return (retVal);
}	//	BetList::CheckBet

/**
* Name:	FindBet 
*
* Prototype: int FindBet(betCrit)
* 
* Desc: find a specific bet in the vector of bets
* 
* Param: betCrit - This is the bet that is being searched to find
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



void BetList::PrintBets(void)
   {
        int i;
        int size;

        size = bets.size();

        for (i = 0; i < size; i++)
        {
            PrintBet(bets[i]);
        }
    }

void BetList::PrintBet(Bet b)
    {
        std::cout << "Bet Type = " << b.GetBetType() << " ";
        std::cout << "bet amount = " << b.GetAmount() << "\n";
    }


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
    Bet bet(5, btPassLine);

    Add(bet);

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

    PrintBets();

    if (retVal != 0){
        std::cout << "Error in load data\n";
    }

}   // loadData
