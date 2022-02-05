//  Atif Hammud Ali
//  Motorcycle.h
//  MS6
//  116743196
//  Created by atif on 8/2/20.
//  Copyright � 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#ifndef SDDS_MOTORCYCLE_H_
#define SDDS_MOTORCYCLE_H_

#include "Vehicle.h"

namespace sdds {
    class Motorcycle : public Vehicle {
        bool hasSidecar;
    public:
        Motorcycle();
        Motorcycle(const char* plate, const char* makeModel, int spotNum = 0, bool flag = false);
        Motorcycle(const Motorcycle& mCopy) = delete;
        Motorcycle& operator=(const Motorcycle& mCopy) = delete;
        virtual std::istream& read(std::istream& istr = std::cin);
        virtual std::ostream& write(std::ostream& ostr = std::cout) const;
        virtual ~Motorcycle();
    };
}
#endif /* Motorcycle_h */

