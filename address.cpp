/*
 * File Name:    address.cpp
 *
 * Author:        Your Name
 * Creation Date: Wednesday, September 11 2019, 14:02
 * Last Modified: Tuesday, September 24 2019, 16:36
 *
 * File Description:
 *
 */
#include "address.h"

Address :: Address() { }

Address :: Address( int number, const std::string& street, int postCode )
{
    this->number = number;
    this->street = street;
    this->postCode = postCode;
}

std::ostream& operator << ( std::ostream & os, const Address & a )
{
    os << "Address: Number " << a.number
       << " " << a.street
       << " post code " << a.postCode;
    
    return os;
}

std::ofstream& operator << ( std::ofstream & fout, const Address & a )
{
    fout << "Address: Number " << a.number
       << " " << a.street
       << " post code " << a.postCode;
    
    return fout;
}

std::istream& operator >> ( std::istream & is, Address & a )
{
    std::cout << "Enter street number >> ";
    is >> a.number;
    std::cout << "Enter street name >> ";
    is >> a.street;
    std::cout << "Enter post code >> ";
    is >> a.postCode;

    return is;
}

std::ifstream& operator >> ( std::ifstream & fin, Address & a )
{

}

bool operator == ( const Address& a1, const Address& a2 )
{
    return ( a1.number == a2.number && a1.street == a2.street && a1.postCode == a2.postCode );
}


