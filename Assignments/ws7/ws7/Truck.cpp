//  Atif Hammud Ali
//  Truck.cpp
//  ws7
//  aali309@myseneca.ca
//  Created by atif on 7/15/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  116743196

#include <cstdio>
#include <iostream>
#include "Truck.h"
#include "MotorVehicle.h"


using namespace std;

namespace sdds{

Truck::Truck(char const licence_Plate[],int built_Year, float load,  char const current_Add[]) : MotorVehicle(licence_Plate,built_Year)
{
    MotorVehicle::moveTo(current_Add);
    this->max_Weight = load;
    this->current_load = 0;
    
}
bool Truck::addCargo(double cargo)
{
    if(current_load != max_Weight)
    {
        current_load = current_load + cargo <= max_Weight?current_load+cargo:max_Weight;
        return true;
    }else{
        return false;
    }
}

bool Truck::unloadCargo()
{
 if (this->current_load != 0 )
 {
     this->current_load = 0;
     return true;
 }
 else{
     
     return false;
 }
}

ostream& Truck::write(ostream& os) const
{
    MotorVehicle::write(os);
    os<<" | "<<current_load<<"/"<<max_Weight;
    return os;

}

istream& Truck::read(istream& in)
{
    MotorVehicle::read(in);
    cout<<"Capacity: ";
    in>>this->max_Weight;
    cout<<"Cargo: ";
    in>>current_load;
    return in;
}

ostream& operator<<(ostream &os, Truck &truck)
{
    return truck.write(os);
}

istream& operator>>(istream &in, Truck &truck)
{
    return truck.read(in);
}


}
