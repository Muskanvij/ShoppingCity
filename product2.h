/*
 * File Name:    product2.h
 *
 * Author:        Your Name
 * Creation Date: Monday, September 16 2019, 16:24 
 * Last Modified: Monday, September 23 2019, 17:22
 * 
 * File Description:
 *
 */
#ifndef PRODUCT_2_H
#define PRODUCT_2_H

#include <iostream>
#include <fstream>
#include <string>

class Product_2
{
public:
    Product_2( );
    Product_2( const std::string& colour, int racks );
    friend std::ostream& operator << ( std::ostream& os, 
                                       const Product_2 & p );
    friend std::ofstream& operator << ( std::ofstream& fout, 
                                       const Product_2 & p );
    friend std::istream& operator >> ( std::istream& is, Product_2 & p );
    friend std::ifstream& operator >> ( std::ifstream& fin, Product_2 & p );
private:
    inline static std::string type { "Toaster" };
    int racks { } ;
    std::string colour { };
};
#endif
