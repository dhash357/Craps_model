#ifndef PASS_H_
#define PASS_H_

#include "BetType.h"
#include "Dice.h"

class Pass : public BetType 
{
    private:
        // Variables

        // Methods

    protected:
        // Variables

        // Methods
        virtual int Assign(sRoll);


    public:
        // Variables

        // Methods
        Pass(void){};                       // generic constructor for Pass
        Pass(int amount, int num);          // Constructor receiving amount and number of the bet assignment in the constructor

};


#endif /* PASS_H_ */
