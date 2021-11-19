#ifndef BETTYPE_H_
#define BETTYPE_H_

#include <vector>
#include "Craps.h"

// BetType.h
class BetType
{
	private:
		// Variables

		// Methods

	protected:

		// Variables
        std::vector<int> winner;
        std::vector<int> loser;
        std::vector<int> assign;

		// Methods
        virtual int Winner(int);
        virtual int Loser(int);
//        virtual int Assign(int);
		int CheckVector(std::vector<int> vec, int value);


	public:

		// Methods
		BetType(void);
		virtual ~BetType() {};

		int Check(int);


};	//	Dice

#endif /* BETTYPE_H_ */
