//  Atif Hammud Ali
//  Ship.cpp
//  ws5p1
//  116743196
//  Created by atif on 6/22/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <iostream>
#include <cstring>
#include "Ship.h"
using namespace std;

namespace sdds{

Ship::Ship()
{
    setEmpty();
}

Ship::Ship(const char* type, Engine engines[], int n_Eng)
{
    if( type[0] != '\0' && strlen(type) <= TYPE_MAX_SIZE && n_Eng > 0 && n_Eng <= 10)
    {
        strcpy(m_type, type);
        m_engCnt = n_Eng;
        for (auto i = 0; i < n_Eng; ++i)
        {
            m_engines[i] = engines[i];
        }
    }
    else
    {
        setEmpty();
    }
    
}
void Ship::setEmpty()
{
    //m_engines[0] = 0;
    m_type[0] = '\0';
    m_engCnt = 0;
}

Ship::operator bool() const
{
    if (m_type[0] != '\0' && m_engCnt > 0 && m_engCnt <= 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}

 Ship& Ship::operator += (Engine engine)
{
    if (m_type[0] == '\0' && m_engCnt <= 0 )//&& m_engCnt > 10)
        {
            cout << "The object is not valid! Engine cannot be added!" <<endl;
        }
    else
        {
            m_engines[m_engCnt] = engine;
            ++m_engCnt;
        }
    return *this;
    
}

 double Ship::calc_Power() const
{
    double tmp_Power = 0.0;
    
    for (auto i = 0; i < this->m_engCnt; ++i)
    {
        tmp_Power += 5*(this->m_engines[i].get());
    }
    return tmp_Power;
}

bool Ship::operator < (double power) const
{
    if (calc_Power() < power )
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Ship::display() const
{
  if ( m_type[0] == '\0' && m_engCnt <= 0 )
  {
      cout <<"No available data\n";
  }
  else
  {
      cout << m_type <<" - " << calc_Power() <<endl;
      for (auto i = 0; i  < m_engCnt; ++i)
      {
          m_engines[i].display();
      }
  }
}

bool operator < (double power, const Ship& theShip)
{
    if (power < theShip.calc_Power())
    {
        return true;
    }
    else
    {
        return false;
    }
}

}
