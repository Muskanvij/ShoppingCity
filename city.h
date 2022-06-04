/*
 * File Name:    city.h
 *
 * Author:        Your Name
 * Creation Date: Wednesday, September 11 2019, 13:39 
 * Last Modified: Tuesday, September 24 2019, 16:36
 * 
 * File Description:
 *
 */
#include "building.h"
#include <algorithm>
#include <functional>
#include <iterator>
#include <vector>
#include "product1.h"
#include "product2.h"
#include "product3.h"
#include "warehouse.h"
#include "residential.h"
#include "commercial.h"

enum class MAIN { ADD_NEW = 1, DISPLAY, ADD_TO_BUILDING, SAVE, EXIT };
enum class ADD_CHOICES { WAREHOUSE = 1, COMMERCIAL, RESIDENTIAL, EXIT };

using CITY = std::vector< Building* >;

void init( CITY & c );
void objectInitializer( const std::string & buildingIdentifier, const std::string & productIdentifier,
                        CITY & city, std::vector<std::string> data );
void run( CITY & c );
void processMain( CITY & c, int choice );
void displayMainMenu( );
void addBuilding( CITY & C );
CITY::const_iterator findAddress( const CITY & c, const Address & a );
void display_All( const CITY & c );
void displayAddChoices( );
void processAddBuilding( CITY & c, int choice );
void addResidential( CITY & c, const Address & a );
void addCommercial( CITY & c, const Address & a );
void addWarehouse( CITY & c, const Address & a );
template <typename T>
void addToWarehouse( CITY & city, const Address & address,
                     int quantity, T product );
void save( const CITY & city );
void addToBuilding( CITY & city );

bool AddressFinder( Building * bPtr, Address  & address );
