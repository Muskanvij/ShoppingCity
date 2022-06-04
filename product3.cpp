/*
 * File Name:    product3.cpp
 *
 * Author:        Your Name
 * Creation Date: Monday, September 16 2019, 16:23 
 * Last Modified: Tuesday, September 24 2019, 16:37
 * 
 * File Description:
 *
 */
#include "product3.h"

Product_3 :: Product_3( ) { }

Product_3 :: Product_3( double range, const std::string& model, int numOfP )
{
    this->range = range;
    this->model = model;
    this->numberOfPassengers = numOfP;
}

std::ostream& operator << ( std::ostream& os, const Product_3& p )
{
    os << "\"Range: \"" << p.range << std::endl
        << "\"Model: \"" << p.model << std::endl
        <<"\"Number of passengers:\"" << p.numberOfPassengers;
    
    return os;
}

std::ofstream& operator << ( std::ofstream& fout, const Product_3& p )
{
    fout << "\"Range: \"" << p.range << std::endl
        << "\"Model: \"" << p.model << std::endl
        <<"\"Number of passengers:\"" << p.numberOfPassengers;
    
    return fout;
}

std::istream& operator >> ( std::istream& is, Product_3& p )
{
    std::cout << "Enter range >> ";
    is >> p.range;
    std::cout << "Enter model >> ";
    is >> p.model;
    std::cout << "Enter number of passengers >> ";
    is >> p.numberOfPassengers;

    return is;
}
    
std::ifstream& operator >> ( std::ifstream& fin, Product_3& p )
{

}

