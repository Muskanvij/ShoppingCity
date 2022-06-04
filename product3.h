/*
 * File Name:    product3.h
 *
 * Author:        Your Name
 * Creation Date: Monday, September 16 2019, 16:27 
 * Last Modified: Monday, September 23 2019, 19:25
 * 
 * File Description:
 *
 */
#ifndef PRODUCT_3_H
#define PRODUCT_3_H

#include <iostream>
#include <fstream>
#include <string>

class Product_3
{
public:
    Product_3( );
    Product_3( double range, const std::string& model, int numOfP );

    friend std::ostream& operator << ( std::ostream& os,
                                       const Product_3 & p );
    friend std::ofstream& operator << ( std::ofstream& fout,
                                       const Product_3 & p );
    friend std::istream& operator >> ( std::istream& is, Product_3 & p );
    friend std::ifstream& operator >> ( std::ifstream& fin, Product_3 & p );

private:
    double range { 0 };
    std::string model { };
    int numberOfPassengers { 0 };
    static inline std::string type { "Aircraft" };
};
#endif
