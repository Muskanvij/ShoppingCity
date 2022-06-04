/*
 * File Name:    building.cpp
 *
 * Author:        Your Name
 * Creation Date: Wednesday, September 11 2019, 13:38 
 * Last Modified: Tuesday, September 24 2019, 16:36
 * 
 * File Description:
 *
 */
#include "building.h"

Building :: Building() {}

Building :: Building( const Address& a, const std::string& type ) {
    this->address = a;
    this->type = type;
}


