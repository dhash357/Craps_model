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


