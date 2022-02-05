//  Atif Hammud Ali
//  Motorcycle.cpp
//  MS6
//  116743196
//  Created by atif on 8/2/20.
//  Copyright � 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <iostream>
#include "Motorcycle.h"

namespace sdds {
    Motorcycle::Motorcycle() {
        Vehicle::setEmpty();
        hasSidecar = false;
    }
    Motorcycle::Motorcycle(const char* plate, const char* makeModel, int spotNum, bool flag) : Vehicle(plate, makeModel, spotNum) {
        hasSidecar = flag;
    }
    
    std::istream& Motorcycle::read(std::istream& istr) {
        if (isCsv()) {
            Vehicle::read(istr);
            int option;
            istr >> option;
            hasSidecar = bool(option);
            istr.ignore();
        }
        else {
            std::cout << "\nMotorcycle information entry" << std::endl;
            Vehicle::read(istr);
            std::cout << "Does the Motorcycle have a side car? (Y)es/(N)o: ";
            hasSidecar = yes();
        }

        return istr;
    }

    std::ostream& Motorcycle::write(std::ostream& ostr) const {
        if (isEmpty()) {
            ostr << "Invalid Motorcycle Object" << std::endl;
        }
        else {
            if (isCsv()) {
                ostr << "M,";
                Vehicle::write(ostr);
                ostr << int(hasSidecar) << std::endl;
            }
            else {
                ostr << "Vehicle type: Motorcycle" << std::endl;
                Vehicle::write(ostr);
                if (hasSidecar) {
                    ostr << "With Sidecar" << std::endl;
                }
            }
        }

        return ostr;
    }

    Motorcycle::~Motorcycle() {

    }
}
