#include <iostream>
#include <algorithm> // Needed for find
#include "../h/PassLine.h"
#include "../h/Craps.h"


// PassLine
// Description	Pass is a child of BetType. This is the initial bet when 
//              a bet is placed on the Pass Line

PassLine::PassLine(void) {

    winner.push_back(7);
    winner.push_back(11);

    loser.push_back(2);
    loser.push_back(3);
    loser.push_back(12);

    change.push_back(4);
    change.push_back(5);
    change.push_back(6);
    change.push_back(8);
    change.push_back(9);
    change.push_back(10);

}   // PassLine::PassLine


int PassLine::CheckWinner(int roll){

   	std::cout << "PassLine::CheckWinner Begin " << std::endl;

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

}   // CheckWinner


//BetType[CONST::PassAssigned][4]

