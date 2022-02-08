#include <vector>

#include "../h/Dice.h"
#include "../h/Die.h"
#include "../h/Craps.h"

/**
 * Name: Dice
 *
 * Prototype: Void Dice(Void)
 * 
 * Desc: Generic Constructor
 * 
 * Param:   void
 * 
 * Create Date: 21/12/29
 * Create By:   DJH
 * 
 * Modification:
 *  21/12/29    DJH     Created
 * 
 */ 
Dice::Dice(){
}   // Dice

/**
 * Name: Dice
 *
 * Prototype: Void Dice(int numDice, int sides)
 * 
 * Desc: This simulates the roll of 2 dies each has 6 sides
 * 
 * Param:   void
 * 
 * Create Date: 21/12/22
 * Create By:   DJH
 * 
 * Modification:
 * 
 */ 
Dice::Dice(int num, int s){

    int i;
    numDice = num;
    sides = s;
    

    for( i = 0; i < numDice; i++){
        Die die(s);
        dice.push_back(die);
    }

}   // Dice


/**
 * Name: GetSides
 *
 * Prototype: int GetSides(void)
 * 
 * Desc: Access function to return number of sides from Dice class
 * 
 * Param:   void
 * 
 * Create Date: 21/12/29
 * Create By:   DJH
 * 
 * Modification:
 *  21/12/29    DJH     Created
 * 
 */ 
int Dice::GetSides(void){
    return sides;
}   // GetSides

/**
 * Name: GetNumDice
 *
 * Prototype: int GetNumDice (void)
 * 
 * Desc: Access function to return number of Dice used
 * 
 * Param:   void
 * 
 * Create Date: 21/12/29
 * Create By:   DJH
 * 
 * Modification:
 *  21/12/29    DJH     Created
 * 
 */ 
int Dice::GetNumDice (void){
    return numDice;
}   // GetNumDice

/**
 * Name: GetRoll
 *
 * Prototype: int GetRoll (sRoll)
 * 
 * Desc: Access function to return the current roll on the dice
 * 
 * Param:   void
 * 
 * Create Date: 22/01/18
 * Create By:   DJH
 * 
 * Modification:
 *  22/01/18    DJH     Created
 * 
 */ 
sRoll Dice::GetRoll (void){
    return roll;
}   // GetRoll

/**
 * Name: Roll
 *
 * Prototype: int Roll (sRoll& roll)
 * 
 * Desc: The act of rolling the dice. This will roll the number of dice with the number of sides. 
 * 
 * Param:   sRoll&
 * 
 * Return:  structure of each die and roll and the total of all rolls
 * 
 * Create Date: 21/12/29
 * Create By:   DJH
 * 
 * Modification:
 *  21/12/29    DJH     Created
 * 
 */ 
int Dice::Roll(void){
    int retVal = retGood;

    roll.valueL = dice[dieLeft].Roll();
    roll.valueR = dice[dieRight].Roll();
    roll.total = roll.valueL + roll.valueR;
 
    return retVal;

}   // Roll

