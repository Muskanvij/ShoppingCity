/*
 * File Name:    commercial.cpp
 *
 * Author:        Your Name
 * Creation Date: Monday, September 16 2019, 17:27 
 * Last Modified: Tuesday, September 24 2019, 16:37
 * 
 * File Description:
 *
 */
#include "commercial.h"

constexpr double RATE = 4.50;

Commercial :: Commercial() {}

Commercial :: Commercial( const Address& address, int openHour, int closeHour ) : Building(address, type)
{
    this->openHour = openHour;
    this->closeHour = closeHour;
}



void Commercial :: setRate()
{
    rate = RATE * ( closeHour - openHour );
}

void Commercial :: add()
{
    std::cout << "Enter new opening hour >> ";
    std::cin >> openHour;
    std::cout << "Enter new closing hour >> ";
    std::cin >> closeHour;
}

void Commercial :: display() const
{
    std::cout << "something";
}

// void Commercial :: saveToFile( std::ofstream& fout) const
// {

// }

// void Commercial :: readFromFile( std::ifstream& fin )
// {

// }

