/*
 * File Name:    residential.cpp
 *
 * Author:        Your Name
 * Creation Date: Monday, September 16 2019, 16:48 
 * Last Modified: Tuesday, September 24 2019, 16:37
 * 
 * File Description:
 *
 */
#include "residential.h"

constexpr double RATE = 4.78;

Residential :: Residential() {}

Residential :: Residential( const Address& address, int numPeople ) : Building(address, type)
{
    this->numberOfPeople = numPeople;
}

void Residential :: display() const
{

}

void Residential :: setRate()
{
    rate = RATE * numberOfPeople;
}

void Residential :: add()
{
    std::cout << "Enter number of people in this building >> ";
    std::cin >> numberOfPeople;
}

// void Residential :: saveToFile( std::ofstream& fout) const
// {

// }

// void Residential :: readFromFile( std::ifstream& fin )
// {
    
// }
