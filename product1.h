/*
 * File Name:    product1.h
 *
 * Author:        Your Name
 * Creation Date: Monday, September 16 2019, 14:55 
 * Last Modified: Monday, September 23 2019, 21:45
 * 
 * File Description:
 *
 */
#ifndef PRODUCT_1_H
#define PRODUCT_1_H

#include <iostream>
#include <fstream>
#include <string>

class Product_1
{
public:
    Product_1( );
    Product_1( int screenSize, double price  );
    
    friend std::ostream& operator << ( std::ostream& os,
                                       const Product_1& p );
    friend std::ofstream& operator << ( std::ofstream& fout,
                                       const Product_1& p );
    friend std::istream& operator >> ( std::istream& is, Product_1& p );
    friend std::ifstream& operator >> ( std::ifstream& fin, Product_1& p );
private:
    static inline std::string type { "TV" };
    int screenSize { 0 };
    double price { 0.0 };
};
#endif
