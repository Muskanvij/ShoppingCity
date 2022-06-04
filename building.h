/*
 * File Name:    building.h
 *
 * Author:        Your Name
 * Creation Date: Wednesday, September 11 2019, 13:36 
 * Last Modified: Tuesday, September 24 2019, 13:00
 * 
 * File Description:
 *
 */
#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include <fstream>
#include <string>

#include "address.h"

class Building
{
public:
    Building( );
    Building( const Address& a, const std::string& type );

    virtual ~Building( ) noexcept { } ;
    virtual void display( ) const { };
    // virtual void saveToFile( std::ofstream& fout) const;
    // virtual void readFromFile( std::ifstream& fin );

    friend std::ostream& operator << ( std::ostream& os, const Building& b );
    friend std::ofstream& operator << ( std::ofstream& fout, 
                                        const Building& b);
    friend std::istream& operator >> ( std::istream& is, Building& b );
    friend std::ifstream& operator >> ( std::ifstream& fin,
                                        Building& b );
    const Address& getAddress( ) const { return address; }

    bool operator == ( const Building & b1 ) const;
    bool operator == ( Building & b1 ) const;

    virtual void setRate( ) = 0; // abstract function

    virtual void add( ) = 0; 

protected:
    double rate { 0 };

private:
    std::string type {  } ;
    Address address { } ;
};

#endif
