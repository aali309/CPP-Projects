//  Atif Hammud Ali
//  Car.h
//  MS6
//  116743196
//  Created by atif on 8/2/20.
//  Copyright � 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#ifndef SDDS_CAR_H_
#define SDDS_CAR_H_

#include <iostream>
#include "Vehicle.h"

namespace sdds {
    class Car : public Vehicle {
        bool carWash;
    public:
        Car();
        Car(const char* plate, const char* makeModel, int spotNum = 0, bool flag = false);
        Car(const Car& cCopy) = delete;
        Car& operator=(const Car& cCopy) = delete;
        virtual std::istream& read(std::istream& istr = std::cin);
        virtual std::ostream& write(std::ostream& ostr = std::cout) const;
        virtual ~Car();
    };
}
#endif /* Car_h */

