#include <vector>

#include "../h/Dice.h"
//#include "../h/Die.h"
//#include "../h/Craps.h"

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
    sides = s;
    numDice = num;
    

    for( i = 0; i < numDice; i++){
        Die die(sides);
        dice.push_back(die);
    }

}   // Dice

int Dice::Roll(sRoll& roll){
    int i;

    roll.valueL = dice[dieLeft].Roll();
    roll.valueR = dice[dieRight].Roll();
    roll.total = roll.valueL + roll.valueR;
 

}   // Roll

