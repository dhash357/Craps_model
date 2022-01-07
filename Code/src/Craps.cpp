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
}   // CrapsRoll

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
    sRoll roll;

    // Roll the dice
    retVal = dice.Roll(roll);

    if (retVal == retBad){
        std::cout << "We need a message object to report errors" << std::endl;
    }

    // Lets write out the dice results
    std::cout << "Die L = " << roll.valueL << std::endl;
    std::cout << "Die R = " << roll.valueR << std::endl;
    std::cout << "Total = " << roll.total << std::endl;


    return retVal;

}   // CrapsRoll

