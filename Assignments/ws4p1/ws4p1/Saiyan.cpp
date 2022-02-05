//  Atif Ali
//  Saiyan.cpp
//  ws4p1
//  116743196
//  Created by atif on 6/16/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <cstring>
#include <iostream>
#include "Saiyan.h"

using namespace std;
namespace sdds{
 
void Saiyan::setEmpty() //function that sets to safe empty state.
    {
        m_name[0] = '\0';
        m_dob = 0;
        m_power = 0;
    }

Saiyan::Saiyan()//default constructor that sets current object to empty state
    {
        setEmpty();
    }

void Saiyan::set(const char* name, int dob,int power,bool super)
    {
      if( name == nullptr || strlen(name) > (MAX_NAME +1) || dob > 2020 ||dob < 0 || power < 0 )
        {
            setEmpty();
        }
      else
      {
          strcpy(m_name,name);
          m_dob = dob;
          m_power = power;
          m_super = super;
          
      }
    }

bool Saiyan::isValid() const

    {
if(m_name[0] != '\0' && strlen(m_name) < (MAX_NAME + 1)&& m_dob < 2020 && m_dob >= 0 && m_power >=0)
        {
            return true;
        }
        else
            {
               return false;
            }
      
    }

 bool Saiyan::fight(const Saiyan& other) const
    {
        if(!isValid() || !other.isValid())
        {
            return false;
        }
        else if (this->m_power >= other.m_power)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

void Saiyan::display() const
    {
        if(isValid() != true)
            {
                cout <<"Invalid Saiyan!"<<endl;
            }
        else
            {
                cout <<m_name <<endl;
                cout<<"DOB: "<<m_dob <<endl;
                cout<<"Power: "<<m_power<<endl;
                cout<<"Super: ";
                if(!isSuper())
                {
                    cout<<"no"<<endl;
                }
                else
                {
                    cout <<"yes"<<endl;
                }
                //cout<<"Super: "<<isSuper()<<endl;
            }
    }

bool Saiyan::isSuper()const
{
   /* if (m_super == false)
        {
            cout<< "no" <<endl;
            //return false;
        }
else
        {
            cout<<"yes"<<endl;
            //return true;
        }
    */
    return m_super;
}

Saiyan::Saiyan(const char* name, int dob, int power)//custome constructor that uses set() to handle data passed
    {
        set(name,dob,power);
    }

Saiyan::~Saiyan()//destructor 
{
    
}



}
