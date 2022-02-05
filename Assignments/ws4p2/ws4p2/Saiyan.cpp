//  Atif Ali
//  Saiyan.cpp
//  ws4p2
//  116743196
//  Created by atif on 6/17/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca


#include <cstring>
#include <iostream>
#include "Saiyan.h"

using namespace std;
namespace sdds{
 
void Saiyan::setEmpty() //function that sets to safe empty state.
    {
        m_name = nullptr;
        m_dob = 0;
        m_power = 0;
        m_level = 0;
        m_super = false;
    }

Saiyan::Saiyan()//default constructor that sets current object to empty state
    {
        setEmpty();
    }

void Saiyan::set(const char* name, int dob, int power, int level ,bool super)

    {
if (name == nullptr||strlen(name) > (MAX_NAME + 1)||dob >= 2020||dob < 0||power < 0||level < 0)
        {
            delete [] m_name;
            setEmpty();
        }
     else
        {
            if (m_name != nullptr)
            {
                delete [] m_name;
                m_name = nullptr;
            }
            m_name = new char [strlen(name)+1];
            strcpy(m_name, name);
                    m_dob = dob;
                    m_power = power;
                    m_super = super;
                    m_level = level;
        }
    }

bool Saiyan::isValid() const

    {
if(m_name != nullptr && m_name[0] != '\0' && m_dob < 2020 && m_dob >= 0 && m_power >=0 && m_level >=0)
        {
            return true;
        }
        else
            {
               return false;
            }
      
    }

 bool Saiyan::fight(Saiyan& other)
    {
        if(!isValid() || !other.isValid())
        {
            return false;
        }
        else
            
         this->powerup();
         other.powerup();
        
        if (this->m_power >= other.m_power)
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
                cout<<m_name <<endl;
                cout<<"     DOB: "<<m_dob <<endl;
                cout<<"   Power: "<<m_power<<endl;
                cout<<"   Super: ";
                
                if(!isSuper())
                {
                    cout<<"no"<<endl;
                }
                else
                {
                    cout <<"yes"<<endl;
                    cout<<"   Level: "<<m_level<<endl;
                }
                
            }
    }

bool Saiyan::isSuper()const
{
    return m_super;
}

void Saiyan::powerup()
{
    if ( isSuper())
    {
        m_power +=  (m_power * 0.10) * (m_level);
    }
}

Saiyan::Saiyan(const char* name, int dob, int power)//custome constructor that uses set() to
    {
        setEmpty();
        set(name,dob,power);
    }

Saiyan::~Saiyan()//destructor
{
    delete [] m_name;
    m_name = nullptr;
}



}
