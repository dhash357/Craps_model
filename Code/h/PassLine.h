#ifndef PASSLINE_H_
#define PASSLINE_H_

#include "BetType.h"

class PassLine : public BetType 
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
        PassLine(void){};           // generic constructor for PassLine
        PassLine(int amount);       // Constructor pass in the amount of the bet when constructed
        
};


#endif /* PASSLINE_H_ */
