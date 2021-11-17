#ifndef BETTYPE_H_
#define BETTYPE_H_

#include <vector>
#include "Craps.h"

// BetType.h
class BetType
{
	private:
		

	protected:

		// Variables
        std::vector<int> winner;
        std::vector<int> loser;
        std::vector<int> change;

		// Methods
        virtual int CheckWinner(int);
 //       virtual int CheckLoser(int) = 0;
 //       virtual int CheckAssign(int) = 0;

	public:

		// Methods
		BetType(void);
		virtual ~BetType() {};

		int Check(int);


};	//	Dice

#endif /* BETTYPE_H_ */
