//  Atif Hammud Ali
//  MotorVehicle.h
//  ws7
//  aali309@myseneca.ca
//  Created by atif on 7/15/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  116743196

#ifndef SDDS_MOTORVEHICLE_H
#define SDDS_MOTORVEHICLE_H
#include "MotorVehicle.h"

namespace sdds{

class MotorVehicle
{
    char licence_Plate[32];
    char current_Add[64];
    int built_Year;
    
public:
    MotorVehicle(const char lic[], int year);
    void moveTo(const char* address);
    std::ostream& write(std::ostream& os) const;
    std::istream& read(std::istream& in);
    
    friend std::ostream& operator<<(std::ostream &out, const MotorVehicle &mtr_V);
    friend std::istream& operator>>(std::istream &in, MotorVehicle &mtr_V);
    
};
}
#endif /* MotorVehicle_h */
