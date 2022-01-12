#ifndef BET_H_
#define BET_H_

#include <memory>
#include <utility>
#include "BetType.h"

struct sBet     // Structure of the bet including variables
{
	/* data */
	int amount = 0;						// Amount of money for this bet
	int betTypeId;						// What type of bet is this
	int betNum;							// Number that the bet is based on. This is a roll number. 

};


class Bet
{
	private:

		// Variables
        sBet betstr;
		
		std::unique_ptr<BetType> betType;
		int win = 0;						// winning amount from the roll
		int loss = 0;						// loss amount from the roll
		int action;							// Action to be taken after the roll is over; (Delete or None)

		// Methods
		int CreateBetType(void);			// create the BetType object

	public:

//		std::unique_ptr<BetType> betType = NULL;

        // Default constructor
        Bet(void);                  
		
        // Overload constructors
        Bet(int, int);          // params int amount, int betTypeId
		Bet(int, int, int);     // params int amount, int betTypeId, int betNum
        Bet(const Bet &);       // Copy Constructor
        Bet& operator=(Bet& ) noexcept;    // Copy Assignment Operator
        Bet(const Bet &&);                 // Move Constructor
        Bet& operator=(Bet&& ) noexcept;   // Move Assignment Operator

        // Destructor
        ~Bet();

    
        // Accessor Functions
        int GetAmount (void);               // Return the bet amount from betstr
        int GetBetTypeId (void);            // Return the bet BetTypeId from betstr
        int GetBetNum (void);               // Return the bet BetNum from betstr

        // Mutator Functions
        int SetBetStr (int, int, int);      // Set the structure for the bet

        // Functions
		int BetCheck (int);				// Check the Bet for winner, loser or reassign; pass in the roll
        

};

#endif /* BET_H_ */
