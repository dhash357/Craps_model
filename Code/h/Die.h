#ifndef DIE_H_
#define DIE_H_



// die.h
class Die
{
	private:
		int sides;


	public:
		Die(int s);

		int Roll(void);

        // Gettor Functions
        int GetSides();

};	//	Die

#endif /* DIE_H_ */