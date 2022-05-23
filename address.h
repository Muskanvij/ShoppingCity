/*
 * File Name:    address.h
 *
 * Author:        Your Name
 * Creation Date: Wednesday, September 11 2019, 14:00
 * Last Modified: Tuesday, September 24 2019, 12:52
 *
 * File Description:
 *
 */
#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>
#include <fstream>

class Address
{
public :
    Address( );
    Address( int number, const std::string& street, int postCode );

    friend std::ostream& operator << ( std::ostream & os,
                                       const Address & a );
    friend std::ofstream& operator << ( std::ofstream & fout,
                                       const Address & a );
    friend std::istream& operator >> ( std::istream & is,
                                             Address & a );
    friend std::ifstream& operator >> ( std::ifstream & fin,
                                             Address & a );
    friend bool operator == ( const Address& a1, const Address& a2 );

private :
    int number { 0 };
    std::string street { };
    int postCode { 0 };
};
#endif
