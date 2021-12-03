#ifndef PASS_H_
#define PASS_H_

#include "BetType.h"

class Pass : public BetType 
{
    private:
        // Variables

        // Methods

    protected:
        // Variables

        // Methods
        virtual int Assign(int);


    public:
        // Variables

        // Methods
        Pass(void){};                       // generic constructor for PassLine
        Pass(int amount, int number);       // Constructor receiving amount and number in the constructor

};


#endif /* PASS_H_ */
