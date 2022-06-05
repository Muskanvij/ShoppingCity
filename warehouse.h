/*
 * File Name:    warehouse.h
 *
 * Author:        Your Name
 * Creation Date: Monday, September 16 2019, 16:26 
 * Last Modified: Tuesday, September 24 2019, 13:50
 * 
 * File Description:
 *
 */
#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <iostream>
#include <fstream>
#include <string>

#include "building.h"


// forward declarartion
template <typename T>
class Warehouse;

// prototypes of the friend functions
template <typename T>
std::ostream& operator << ( std::ostream& os, const Warehouse< T > & w );

template <typename T>
std::ofstream& operator << ( std::ofstream& os, const Warehouse< T > & w );

template <typename T>
std::istream& operator >>( std::istream& is, Warehouse< T > & w );

template <typename T>
std::ifstream& operator >> ( std::ifstream& fin, Warehouse< T > & w );

template <typename T>
class Warehouse : public Building
{
public:
    Warehouse( );
    Warehouse( const Address& a,
               const T& product, int quantity );

    friend std::ostream& operator << < > ( std::ostream& os, 
                                           const Warehouse < T > & w );
    friend std::ofstream& operator << < > ( std::ofstream& fout, 
                                           const Warehouse < T > & w );
    friend std::istream& operator >> < > ( std::istream& is, 
                                           Warehouse < T > & w );
    friend std::ifstream& operator >> < > ( std::ifstream& fin, 
                                           Warehouse < T > & w );
    virtual void setRate( ) override;

    virtual void display( ) const override;

    // virtual void saveToFile( std::ofstream& fout ) const override;

    virtual void add( ) override; 


private:
    inline static std::string type { "Warehouse" };
    T product { };
    int quantity { 0 };

};

/*
 * Recall that template  classes have to done the other way around
 * we need to include the ,cpp file inside the .h file as the 
 * compiler only generates template code when required so it needs the
 * "whole" picture
 *
 */
#include "warehouse.cpp"

#endif
