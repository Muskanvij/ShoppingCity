/*
 * File Name:    commercial.h
 *
 * Author:        Your Name
 * Creation Date: Monday, September 16 2019, 17:24 
 * Last Modified: Tuesday, September 24 2019, 13:45
 * 
 * File Description:
 *
 */
#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include <iostream>
#include <fstream>
#include <string>

#include "building.h"

class Commercial : public Building
{
public:
    Commercial();
    Commercial( const Address& address, int openHour, int closeHour );
    virtual void display( ) const override;
    virtual void setRate( ) override;

    // virtual void saveToFile( std::ofstream& fout) const;
    // virtual void readFromFile( std::ifstream& fin );

    virtual void add( ) override;

    friend std::ostream& operator << ( std::ostream& os, 
                                       const Commercial & com );
    friend std::ofstream& operator << ( std::ofstream& fout, 
                                       const Commercial & com );
    friend std::istream& operator >> ( std::istream& is, Commercial & com );
    friend std::ifstream& operator >> ( std::ifstream& fin, Commercial & com );

private:
    static inline std::string type { "Commercial" };
    int openHour { 0 };
    int closeHour{ 0 };
};
#endif
