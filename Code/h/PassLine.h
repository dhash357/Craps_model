#ifndef PASSLINE_H_
#define PASSLINE_H_

#include "BetType.h"
#include "Dice.h"

class PassLine : public BetType  
{
    private:
        // Variables

        // Functions

    protected:
        // Variables

        // Funtions
//        virtual int Assign(int);

    public:
        // Variables

        // Constructors
        PassLine(void){};           // generic constructor for PassLine
        PassLine(int amount);       // Constructor pass in the amount of the bet when constructed

        // Functions
        int Winner(sRoll);          // Determine if the current roll for this bet is a Winner
        int Loser(sRoll);           // Determine if the current roll for this bet is a Loser
        int Assign(sRoll);          // Determine if the current roll for this bet needs to be reAssigned

        
};


#endif /* PASSLINE_H_ */
