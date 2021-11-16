//#include <ctime>
//#include <cstdlib>
#include "../h/BetType.h"
#include "../h/Craps.h"
#include <vector>
//#include "/workspaces/Craps_model/Code/h/BetType.h"
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm> // Needed for find

// BetType
// Description	BetType is the type of each bet and all of the details 
//				about that specific bet. 
// Types
//		Come			Bets on the Come line unassigned to a number
//		ComeAssigned	Come bets that are assigned to a number
//		ComeOdds		Odds for a ComeAssigned bet
//		Pass			Bets on the Pass line unassigned to a number
//		PassAssigned	Pass bets that are assigned to a number
//		PassOdds		Odds for a PassAssigned bet
//		Place			Place bets on a number
//		

//BetType::BetType(int s) {
//		this->sides = s;
//
//	}



/*
char CheckWinner(int roll){
  int n;
  int ret;

  ret = 1; //(char)BAD; // Return value; assume that none found
  roll = 7;
  std::vector<int> junk {7, 11};

  //std::list<int> winner;
  n = std::find(junk.begin(), junk.end(), roll);
    //winner.begin(), winner.end(), roll);

  std::cout << "n = " << n;

  // Code for testing 
  //if (n == junk.size()) {
  //  std::cout << "Not a winner" << 'n';
  //} else {
  //  std::cout << "WINNER!!!" << 'n';
 // }

  return (ret);
}
*/


int BetType::Check(){


  std::vector<int> vec { 10, 20, 30, 40 };
      
    // Iterator used to store the position 
    // of searched element
    std::vector<int>::iterator it;
      
    // Print Original Vector
    std::cout << "Original vector :";
    for (int i=0; i<(int)vec.size(); i++)
        std::cout << " " << vec[i];
          
    std::cout << "\n";
      
    // Element to be searched
    int ser = 30;
      
    // std::find function call
    it = find (vec.begin(), vec.end(), ser);

        int index = distance (vec.begin (), it);
    std::cout << "Element found at index/position : " << index << std::endl;


    std::cout << "Begin() " << *vec.begin() << std::endl;
    std::cout << "End () " << *vec.end() << std:: endl;
    std::cout << "Value at Position " << *it << std:: endl;
    



    if (it != vec.end())
    {
        std::cout << "Element " << ser <<" found at position : " << index << std:: endl;
//        std::cout << it - vec.begin() << " (counting from zero)" << std::endl ;
		  std::cout << "end if BetType::Check" << std:: endl;
    } else {
        std::cout << "Element not found.\n\n" << std:: endl;
	}


	std::cout << "return from BetType::Check" << std:: endl;

    return retGood;
}

