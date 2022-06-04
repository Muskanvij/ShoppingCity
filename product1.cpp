/*
 * File Name:    product1.cpp
 *
 * Author:        Your Name
 * Creation Date: Monday, September 16 2019, 16:22 
 * Last Modified: Tuesday, September 24 2019, 16:37
 * 
 * File Description:
 *
 */
#include "product1.h"

Product_1 :: Product_1( ) { }

Product_1 :: Product_1( int screenSize, double price )
{
    this->screenSize = screenSize;
    this->price = price;
}

std::ostream& operator << ( std::ostream& os, const Product_1& p )
{
    os << "\"screen size:\"" << p.screenSize
        <<" \"price:\"" << p.price;
    
    return os;
}

std::ofstream& operator << ( std::ofstream& fout, const Product_1& p )
{
    fout << "\"screen size:\"" << p.screenSize
        <<" \"price:\"" << p.price;
    
    return fout;
}

std::istream& operator >> ( std::istream& is, Product_1& p )
{
    std::cout << "Enter scree size >> ";
    is >> p.screenSize;
    std::cout << "Enter price >> ";
    is >> p.price;

    return is;
}
    
std::ifstream& operator >> ( std::ifstream& fin, Product_1& p )
{

}