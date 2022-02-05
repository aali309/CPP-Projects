//  Atif Hammud Ali
//  Engine.h
//  ws5p2
//  116743196
//  Created by atif on 6/26/20.
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
    Engine *m_engines;
    char *m_type;
    int m_engCnt;
    double calc_Power() const;
    
public:
    Ship();
    Ship(const char* type, Engine* engines, int n_Eng);
    void setEmpty();
    explicit operator bool() const;
    Ship& operator += (Engine engine);
    bool operator < (double power) const;
    void display();
    friend bool operator < (double power, const Ship& theShip);
    ~Ship();
    
};
 
}
#endif
