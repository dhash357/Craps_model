#include <iostream>
#include "../h/Odds.h"
#include "../h/Craps.h"
#include "../h/Dice.h"


/**
 * Name: Odds
 *
 * Prototype: int Odds (void)
 * 
 * Desc: Constructor for the BetType Odds
 * 
 * Param:   None
 * 
 * Create Date: 21/11/22
 * Create By:   DJH
 * 
 * Modification:
 * 211122 DJH Created
 * 
 */ 

Odds::Odds(int amt, int num) {

    // There are only 6 numbers for 'num'. They are {4 5 6 8 9 10}

    // Set Winning numbers into a vector
    winner.push_back(num);

    // Set Losing numbers into a vector
    loser.push_back(7);

    // Set Values for calculating odds
    // This is the odds for pass bets so the odds are different based on the number
    switch (num){
        case 4:
        case 10:
            oddsN = 2;
            oddsD = 1;
            break;
        case 5:
        case 9:
            oddsN = 3;
            oddsD = 2;
            break;
        case 6:
        case 8:
            oddsN = 6;
            oddsD = 5;
            break;

    }

    amount = amt;


}   // Odds::Odds


