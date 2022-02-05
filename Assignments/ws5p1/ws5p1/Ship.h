//  Atif Hammud Ali
//  Ship.h
//  ws5p1
//  116743196
//  Created by atif on 6/22/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca


#ifndef SDDS_SHIP_H
#define SDDS_SHIP_H
#include "Engine.h"

namespace sdds{

const double MIN_STD_POWER = 90.111;
const double MAX_STD_POWER = 99.999;

class Ship
{
    Engine m_engines[10];
    char m_type[TYPE_MAX_SIZE +1];
    int m_engCnt;
    double calc_Power() const;
    
public:
    Ship();
    Ship(const char* type, Engine engines[], int n_Eng);
    void setEmpty();
    explicit operator bool() const;
    Ship& operator += (Engine engine);
    bool operator < (double power) const;
    void display() const;
    friend bool operator < (double power, const Ship& theShip);
    //~Ship();
    
};
 
}
#endif
