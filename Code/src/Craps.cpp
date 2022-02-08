#include "../h/Craps.h"
#include <iostream>

/**
 * Name: Craps
 *
 * Prototype: void Craps(void)
 * 
 * Desc: Generic constructor 
 * 
 * Param:   void
 * 
 * Create Date: 21/12/22
 * Create By:   DJH
 * 
 * Modification:
 * 
 */ 
Craps::Craps(){
}   // CrapsRoll

/**
 * Name: ~Craps
 *
 * Prototype: void ~Craps(void)
 * 
 * Desc: Generic destructor 
 * 
 * Param:   void
 * 
 * Create Date: 21/12/22
 * Create By:   DJH
 * 
 * Modification:
 * 
 */ 
Craps::~Craps(){
}   // ~Craps



/**
 * Name: GetRoll
 *
 * Prototype: sRoll GetRoll(void)
 * 
 * Desc: Return that structure that contains the results of the roll which is stored
 *       in the object Dice.
 * 
 * Param:   void
 * 
 * Create Date: 22/01/18
 * Create By:   DJH
 * 
 * Modification:
 * 22/01/18 DJH     Created
 * 
 */ 
sRoll Craps::GetRoll(){
    return dice.GetRoll();
}   // GetRoll

/**
 * Name: Roll
 *
 * Prototype: int CrapsRoll(void)
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
int Craps::Roll(){

    int retVal;


    // Roll the dice
    retVal = dice.Roll();

    if (retVal == retBad){
        std::cout << "We need a message object to report errors" << std::endl;
    }

    // Lets write out the dice results
    std::cout << "Die L = " << dice.GetRoll().valueL << std::endl;
    std::cout << "Die R = " << dice.GetRoll().valueR << std::endl;
    std::cout << "Total = " << dice.GetRoll().total << std::endl;


    return retVal;

}   // CrapsRoll

