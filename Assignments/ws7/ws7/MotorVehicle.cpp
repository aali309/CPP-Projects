//  Atif Hammud Ali
//  MotorVehicle.cpp
//  ws7
//  aali309@myseneca.ca
//  Created by atif on 7/15/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  116743196

#include <cstring>
#include <iostream>
#include <iomanip>
#include "MotorVehicle.h"
 
using namespace std;
namespace sdds{

MotorVehicle::MotorVehicle(const char lic[], int year)
{
    strcpy(this->licence_Plate, lic);
    this->built_Year = year;
    strcpy(this->current_Add, "Factory");
}
  void MotorVehicle::moveTo(const char address[])
{
    if(strcmp(this->current_Add,address) != 0)
    {
cout<<"|"<<right<<setw(10)<<this->licence_Plate <<"| |"<<right<<setw(20)<<this->current_Add<<" --->--- "<<left<<setw(20)<<address<<"|"<<endl;
        strcpy(this->current_Add,address);
    }
}
  ostream& MotorVehicle::write(ostream &os) const
{
    os<<"| "<<this->built_Year <<" | "<<this->licence_Plate<<" | "<<this->current_Add;
    return os;
}
  istream& MotorVehicle::read(istream &in)
{
    cout<<"Built year: ";
    in>> this->built_Year;
    cout<<"License plate: ";
    in>>this->licence_Plate;
    cout<<"Current location: ";
    in>>this->current_Add;
    return in;
}
  
   std::ostream& operator<<(std::ostream &out, const MotorVehicle &mtr_V)
{
    return mtr_V.write(out);
}
   std::istream& operator>>(std::istream &in, MotorVehicle &mtr_V)
{
    return mtr_V.read(in);
}
}
