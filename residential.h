/*
 * File Name:    residential.h
 *
 * Author:        Your Name
 * Creation Date: Monday, September 16 2019, 16:43 
 * Last Modified: Tuesday, September 24 2019, 13:47
 * 
 * File Description:
 *
 */
#ifndef RESIDENTIAL_H
#define RESIDENTIAL_H

#include <iostream>
#include <fstream>
#include <string>

#include "building.h"

class Residential: public Building
{
public:
    Residential( );
    Residential( const Address& address, int numPeople );
    virtual void display( ) const override;
    virtual void setRate( ) override;

    virtual void add( ) override ;

    friend std::ostream& operator << (std::ostream& os, 
                                      const Residential & res );
    friend std::ofstream& operator << (std::ofstream& fout, 
                                      const Residential & res );
    friend std::istream& operator >> (std::istream& is, 
                                      Residential & res );
    friend std::ifstream& operator >> (std::ifstream& fin, 
                                      Residential & res );

    // virtual void saveToFile( std::ofstream& fout ) const override;
    // virtual void readFromFile( std::ifstream& fin ) override;

private:

    inline static std::string type { "Residential" };
    int numberOfPeople { 0 };
};
#endif
