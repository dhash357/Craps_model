#ifndef PASSLINE_H_
#define PASSLINE_H_

#include "BetType.h"

class PassLine : public BetType 
{
    private:

    protected:
        virtual int Winner(int);
        virtual int Loser(int);
//        virtual int Assign(int);


    public:
        PassLine(void);
        
};


#endif /* PASSLINE_H_ */
