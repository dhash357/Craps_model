#ifndef BET_H_
#define BET_H_

#include <memory>
#include <utility>
#include "BetType.h"
#include "Dice.h"


struct sBet     // Structure of the bet including variables
{
	/* data */
	int amount = 0;						// Amount of money for this bet
	int betTypeId;						// What type of bet is this
	int betNum;							// Number that the bet is based on. This is a roll number. 
    int win;                            // Amount of win for this bet

};


class Bet
{
	private:
    
    
		// Variables
        sBet betstr;

    	std::shared_ptr<BetType> betType;

		int win = 0;						// winning amount from the roll
		int loss = 0;						// loss amount from the roll
		int action;							// Action to be taken after the roll is over; (Delete or None)

		// Methods
		int CreateBetType(void);			// create the BetType object


	public:


        // Default constructor
        Bet(void);                  

        // Overload constructors
        Bet(int, int);          // params int amount, int betTypeId
		Bet(int, int, int);     // params int amount, int betTypeId, int betNum

		
        // Accessor Functions
        int GetAmount (void);               // Return the bet amount from betstr
        int GetBetTypeId (void);            // Return the bet BetTypeId from betstr
        std::string GetBetType (void);      // Return the actual type as in Pass, Pass Line etc. 
        int GetBetNum (void);               // Return the bet BetNum from betstr

        // Mutator Functions
        int SetBetStr (int, int, int);      // Set the structure for the bet

        // Functions
		int BetCheck (sRoll);				// Check the Bet for winner, loser or reassign; pass in the roll

        // Test
        int Check (std::shared_ptr<BetType>, sRoll);
};

#endif /* BET_H_ */
