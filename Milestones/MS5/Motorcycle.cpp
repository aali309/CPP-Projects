//  Atif Hammud Ali
//  Motorcycle.cpp
//  MS5
//  116743196
//  Created by atif on 7/26/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <cstdio>
#include <iostream>
#include "Motorcycle.h"
using namespace std;
namespace sdds
{
    Motorcycle::Motorcycle()
{
    Vehicle::setEmpty();
    sideCar = false;
}

    Motorcycle::Motorcycle(const char* plate_N, const char Make_Model[], int pspot, bool flag) : Vehicle(plate_N,Make_Model,pspot)
{
    sideCar = flag;
}
    
    std::istream& Motorcycle::read(std::istream& istr )
{
    if (isCsv())
    {
        Vehicle::read(istr);
        int option;
        istr >> option;
        sideCar = bool(option);
        istr.ignore();
    }
    else
    {
        std::cout << "\nMotorcycle information entry" << std::endl;
        Vehicle::read(istr);
        std::cout << "Does the Motorcycle have a side car? (Y)es/(N)o: ";
        sideCar = yes();
    }
    return istr;
}

    std::ostream& Motorcycle::write(std::ostream& ostr) const
{
    if (isEmpty())
    {
        ostr <<"Invalid Motorcycle Object" << endl;
    }
    else
    {
        if(isCsv())
        {
            ostr << "M,";
            Vehicle::write(ostr);
            ostr << int(sideCar) << endl;
        }
        else
        {
            ostr << "Vehicle type: Motorcycle" << std::endl;
            Vehicle::write(ostr);
            if (sideCar)
            {
                ostr << "With Sidecar" << endl;
            
            }
        }
    }
        
        return ostr;
}
 Motorcycle::~Motorcycle()
    {
        
    }
}

