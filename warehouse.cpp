/*
 * File Name:    warehouse.cpp
 *
 * Author:        Your Name
 * Creation Date: Monday, September 16 2019, 16:23 
 * Last Modified: Tuesday, September 24 2019, 16:37
 * 
 * File Description:
 *
 */
// #include "warehouse.h" not required as we are including the
//                        warehouse.cpp file inside the warehouse.h
//                        file

constexpr double RATE = 79.22;

template < typename T >
Warehouse < T > :: Warehouse() {}

template < typename T >
Warehouse < T > :: Warehouse( const Address& a, const T& product, int quantity ) : Building( a, type )
{
    this->product = product;
    this->quantity = quantity;
}

template < typename T >
void Warehouse < T > :: setRate()
{
    rate = RATE * quantity;
}

template < typename T >
void Warehouse < T > :: display() const
{
    std::cout << quantity;
}

template < typename T >
void Warehouse < T > :: add()
{
    std::cout << "Enter quantity >> ";
    std::cin >> quantity;
}

// template < typename T >
// void Warehouse < T > :: saveToFile( std::ofstream& fout) const
// {

// }




