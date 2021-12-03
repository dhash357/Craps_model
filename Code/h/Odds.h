#ifndef ODDS_H_
#define ODDS_H_

#include "BetType.h"

class Odds : public BetType 
{
    private:
        // Variables

        // Methods

    protected:
        // Variables

        // Methods
//        virtual int Assign(int);


    public:
        // Variables

        // Methods
        Odds(void){};                       // generic constructor for PassLine
        Odds(int amount, int number);       // Constructor receiving amount and number in the constructor

};


#endif /* ODDS_H_ */
