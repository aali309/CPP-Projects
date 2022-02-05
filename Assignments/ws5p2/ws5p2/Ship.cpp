//  Atif Hammud Ali
//  Engine.h
//  ws5p2
//  116743196
//  Created by atif on 6/26/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca


#include <iostream>
#include <cstring>
#include <iomanip>
#include "Ship.h"
using namespace std;

namespace sdds{

Ship::Ship()
{
    setEmpty();
}

Ship::Ship(const char* type, Engine *engines, int n_Eng)
{
    if(type != nullptr && type[0] != '\0' && strlen(type) <= TYPE_MAX_SIZE && engines != nullptr && n_Eng > 0 && n_Eng <= 10)
    {
        //delete [] m_type;
        //m_type = nullptr;
        
        //delete [] m_engines;
        //m_engines = nullptr;
        
        this->m_type = new char[sizeof type];
        strcpy(m_type, type);
        m_engCnt = n_Eng;
        this->m_engines = new Engine[sizeof(Engine)* n_Eng];
        for (auto i = 0; i < n_Eng; ++i)
        {
            m_engines[i] = engines[i];
        }
    }
    else
    {
        delete [] m_type;
        delete [] m_engines;
        setEmpty();
    }
    
}
void Ship::setEmpty()
{
    m_type = nullptr;
    m_engines = nullptr;
    m_engCnt = 0;
}

Ship::operator bool() const
{
    if (m_type != nullptr && m_type[0] != '\0' && m_engCnt > 0 && m_engCnt <= 10)
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
    if (m_engines == nullptr)// m_type[0] == '\0' && m_engCnt <= 0 )//&& m_engCnt > 10)
        {
            cout << "The object is not valid! Engine cannot be added!" <<endl;
        }
    else
        {
            Engine* newEngines = m_engines;
            m_engines = new Engine[sizeof(Engine) * m_engCnt+1];
            for (auto i = 0; i < m_engCnt ;++i)
            {
                m_engines[i] = newEngines[i];
            }
            delete [] newEngines;
            
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

void Ship::display() 
{
  if ( m_type == nullptr && m_engines == nullptr)// && m_type[0] == '\0' && m_engines == nullptr && m_engCnt <= 0 )
  {
      delete [] m_type;
      delete [] m_engines;
      cout <<"No available data\n";
  }
  else
  {
      streamsize ss = cout.precision(); //storing original precision to a varaible
      cout.setf(ios::fixed);
      cout<<setprecision(2); // setting to two decimal places
      cout << m_type <<" - " <<setw(6) << calc_Power() <<endl;
     
      for (auto i = 0; i  < m_engCnt; ++i)
      {
          m_engines[i].display();
          
      }
      cout.unsetf(ios::fixed);//unsetting the fixed
      cout.precision (ss);//restoring back the normal precision
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

 Ship::~Ship()
{
    delete [] m_type;
    m_type = nullptr;
    delete [] m_engines;
    m_engines = nullptr;
}

}
