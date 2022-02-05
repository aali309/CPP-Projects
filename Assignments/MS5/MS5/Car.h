//  Atif Hammud Ali
//  Car.h
//  MS5
//  116743196
//  Created by atif on 7/26/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#ifndef SDDS_CAR_H
#define SDDS_CAR_H

#include <iostream>
#include "Vehicle.h"

namespace sdds
{
class Car : public Vehicle
{
    bool carWash;
    
public:
    Car();
    Car(const char plate_Number[],const char make_Model[], int pspot = 0, bool flag = false);
    Car& operator=(const Car& cCopy) = delete;
    std::istream& read(std::istream& istr = std::cin);
    std::ostream& write(std::ostream& ostr = std::cout) const;
    virtual ~Car();
    
};
}

#endif /* Car_h */
