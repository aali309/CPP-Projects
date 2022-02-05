//  Atif Hammud Ali
//  Truck.h
//  ws7
//  116743196
//  Created by atif on 7/15/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#ifndef SDDS_TRUCK_H
#define SDDS_TRUCK_H
#include "MotorVehicle.h"

namespace sdds
{
class Truck : public MotorVehicle{
    float max_Weight;
    float current_load; // cant be > max_Weight

public:
    Truck(char const licence_Plate[],int built_Year, float load,  char const current_Add[]);
    bool addCargo(double cargo);
    bool unloadCargo();
    std::ostream& write(std::ostream& os) const;
    std::istream& read(std::istream& in);
    friend std::ostream& operator<<(std::ostream &out, Truck &truck);
    friend std::istream& operator>>(std::istream &in, Truck &truck);

};

}


#endif /* Truck_h */
