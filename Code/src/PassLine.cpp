#include <iostream>
#include "../h/PassLine.h"
#include "../h/Craps.h"


/**
 * Name: PassLine
 *
 * Prototype: int PassLine (void)
 * 
 * Desc: Constructor for the BetType PassLine
 * 
 * Param:   None
 * 
 * Create Date: 21/11/17
 * Create By:   DJH
 * 
 * Modification:
 * 211117 DJH Created
 * 
 */ 

PassLine::PassLine(int amt) {

    // Set Winning numbers into a vector
    winner.push_back(7);
    winner.push_back(11);

    // Set Losing numbers into a vector
    loser.push_back(2);
    loser.push_back(3);
    loser.push_back(12);

    // Set numbers to be reAssigned into a vector
    assign.push_back(4);
    assign.push_back(5);
    assign.push_back(6);
    assign.push_back(8);
    assign.push_back(9);
    assign.push_back(10);

    // Set Values for calculating odds
    // This is the pass line bet so the odds are 1:1
    oddsN = 1;
    oddsD = 1;

    amount = amt;


}   // PassLine::PassLine

/**
 * Name: Winner
 *
 * Prototype: int Winner (sRoll)
 * 
 * Desc: This function will determine if the current roll is a winner for the current bet being checked from
 *          the BetList
 * 
 * Param:   sRoll roll  Current roll of the dice being checked 
 * 
 * Create Date: 22/01/18
 * Create By:   DJH
 * 
 * Modification:
 * 220118 DJH Created
 * 
 */ 
int PassLine::Winner(sRoll roll) 
{
    int chkRtn;

std::cout << "PassLine::Winner Begin\n";
    chkRtn = CheckVector(winner, roll);
std::cout << "PassLine::Winner Return = " << chkRtn << "\n";  
    
    return chkRtn;
    
}   // PassLine::Winner

/**
 * Name: Loser
 *
 * Prototype: int Loser (sRoll)
 * 
 * Desc: This function will determine if the current roll is a Loser for the current bet being checked from
 *          the BetList
 * 
 * Param:   sRoll roll  Current roll of the dice being checked 
 * 
 * Create Date: 22/01/18
 * Create By:   DJH
 * 
 * Modification:
 * 220118 DJH Created
 * 
 */ 
int PassLine::Loser(sRoll roll) 
{
    int chkRtn;
    int retVal = retGood;
std::cout << "PassLine::Loser Begin\n";
    chkRtn = CheckVector(loser, roll);
std::cout << "PassLine::Loser Return = " << chkRtn << "\n";  
    
    return retVal;
    
}   // PassLine::Loser

/**
 * Name: Assign
 *
 * Prototype: int Assign (sRoll)
 * 
 * Desc: This function will determine if the current roll is a Assign for the current bet being checked from
 *          the BetList
 * 
 * Param:   sRoll roll  Current roll of the dice being checked 
 * 
 * Create Date: 22/01/18
 * Create By:   DJH
 * 
 * Modification:
 * 220118 DJH Created
 * 
 */ 
int PassLine::Assign(sRoll roll) 
{
    int chkRtn;
    int retVal = retGood;
std::cout << "PassLine::LoAssignser Begin\n";
    chkRtn = CheckVector(assign, roll);
std::cout << "PassLine::Assign Return = " << chkRtn << "\n";  
    
    return retVal;
    
}   // PassLine::Loser