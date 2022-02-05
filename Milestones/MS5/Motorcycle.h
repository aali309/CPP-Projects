//  Atif Hammud Ali
//  Motorcycle.h
//  MS5
//  116743196
//  Created by atif on 7/26/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#ifndef SDDS_MOTORCYCLE_H
#define SDDS_MOTORCYCLE_H
#include "Vehicle.h"

namespace sdds
{
class Motorcycle : public Vehicle
{
    bool sideCar;
    
public:
    Motorcycle();
    Motorcycle(const char* plate_N, const char Make_Model[], int pspot = 0, bool flag = false);
    Motorcycle(const Motorcycle& mCopy) = delete;
    Motorcycle& operator=(const Motorcycle& mCopy) = delete;
    std::istream& read(std::istream& istr = std::cin);
    std::ostream& write(std::ostream& ostr = std::cout) const;
    virtual ~Motorcycle();
    
};

}

#endif /* Motorcycle_h */

