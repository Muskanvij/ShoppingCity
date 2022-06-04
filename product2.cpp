/*
 * File Name:    product2.cpp
 *
 * Author:        Your Name
 * Creation Date: Monday, September 16 2019, 16:23 
 * Last Modified: Tuesday, September 24 2019, 16:37
 * 
 * File Description:
 *
 */

#include "product2.h"

Product_2 :: Product_2( ) { }

Product_2 :: Product_2( const std::string& colour, int racks )
{
    this->colour = colour;
    this->racks = racks;
}

std::ostream& operator << ( std::ostream& os, const Product_2& p )
{
    os << "\"Colour:\"" << p.colour << std::endl
        <<"\"Number of racks:\"" << p.racks;
    
    return os;
}

std::ofstream& operator << ( std::ofstream& fout, const Product_2& p )
{
    fout << "\"Colour:\"" << p.colour << std::endl
        <<"\"Number of racks:\"" << p.racks;
    
    return fout;
}

std::istream& operator >> ( std::istream& is, Product_2& p )
{
    std::cout << "Enter colour >> ";
    is >> p.colour;
    std::cout << "Enter number of racks >> ";
    is >> p.racks;

    return is;
}
    
std::ifstream& operator >> ( std::ifstream& fin, Product_2& p )
{

}

