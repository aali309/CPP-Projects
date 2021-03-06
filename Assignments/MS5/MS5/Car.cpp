//  Atif Hammud Ali
//  Car.cpp
//  MS5
//  116743196
//  Created by atif on 7/26/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <cstdio>
#include <iostream>
#include "Car.h"

namespace sdds {

Car::Car()
{
    Vehicle::setEmpty();
    carWash = false;
}

Car::Car(const char plate_Number[],const char make_Model[], int pspot, bool flag ) : Vehicle(plate_Number, make_Model, pspot)
{
    carWash = flag;
}

std::istream& Car::read(std::istream& istr )
{
    if(isCsv())
    {
        Vehicle::read(istr);
        int option;
        istr >> option;
        carWash = option;
        istr.ignore();
    }
    else
    {
       std::cout << "\nCar information entry" << std::endl;
       Vehicle::read(istr);
       std::cout << "Carwash while parked? (Y)es/(N)o: ";
       carWash = yes();
    }
    return istr;
}

std::ostream& Car::write(std::ostream& ostr) const
{
    if (isEmpty()) {
            ostr << "Invalid Car Object" << std::endl;
        }
        else {
            if (isCsv()) {
                ostr << "C,";
                Vehicle::write(ostr);
                ostr << int(carWash) << std::endl;
            }
            else {
                ostr << "Vehicle type: Car" << std::endl;
                Vehicle::write(ostr);
                if (carWash) {
                    ostr << "With Carwash" << std::endl;
                }
                else {
                    ostr << "Without Carwash" << std::endl;
                }
            }
        }

        return ostr;
    }

 Car::~Car()
{
    
}
}
