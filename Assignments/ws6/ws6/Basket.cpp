//  Atif Ali
//  Basket.cpp
//  ws6
//  116743196
//  Created by atif on 7/6/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <iomanip>
#include <iostream>
#include <cstdio>
#include "Basket.h"
using namespace std;

namespace sdds
{
void Basket::setEmpty()
{
    m_cnt = 0;
    m_price = 0;
}

Basket::Basket()
{
    m_fruits = nullptr;
    setEmpty();
}
Basket::Basket(Fruit* fruit, int cnt, double price)
{
    if ( fruit != nullptr && cnt > 0 && price > 0.00)//debug &&
    {
        m_cnt = cnt;
        m_price = price;
        if(m_cnt >0)
        {
            m_fruits = new Fruit[m_cnt];
            for (auto i = 0; i < cnt; ++i)
            {
                m_fruits[i] = fruit[i];
            }
        }
        else
        {
            m_fruits = nullptr;
        }
    }
    else{
        m_fruits = nullptr;
        *this = Basket();
    }
}
    
        
Basket::Basket(const Basket& objbask)
{
    m_fruits = nullptr;
    dc(objbask);
    
}
Basket& Basket::operator=(const Basket& obj)
{
    if (this != &obj)
    {
        delete [] m_fruits;
        m_fruits = nullptr;
        dc(obj);
    }
    return *this;
}
Basket::~Basket()
{
    delete [] m_fruits;
    m_fruits = nullptr;
}
void Basket::setPrice(double price)
{
    if ( price > 0)
    {
        m_price = price;
    }
}
Basket::operator bool()
{
   if(m_fruits != nullptr)
   {
       return true;
   }
    else
    {
        return false;
    }
}
Basket& Basket::operator+=(Fruit fruit)
{
    if ( fruit.m_name[0] != '\0' && fruit.m_qty > 0.00)
    {
        Fruit* tmp = nullptr;
        tmp = new Fruit[m_cnt+1];
        for(auto i = 0; i < m_cnt; ++i)
        {
            tmp[i] = this->m_fruits[i];
        }
        tmp[m_cnt++] = fruit;
        delete [] m_fruits;
        m_fruits = tmp;
    }
    return *this;
}

ostream& operator<<(ostream& os, Basket& basket)
{
    if(basket.m_fruits == nullptr)
    {
        os <<"This basket is empty!" <<endl;
    }
    else
    {
       os <<"Basket Content:"<<endl;
        for (auto i = 0; i < basket.m_cnt; ++i)
        {
            double matchoutput = os.precision(2);
            os.setf(ios::fixed);
            os <<setw(10) <<basket.m_fruits[i].m_name <<": " << basket.m_fruits[i].m_qty <<"kg" << endl;
            os.precision(matchoutput);
            os.unsetf(ios::fixed);
        }
        os.setf(ios::fixed);
        double matchoutput = os.precision(2);
        os <<"Price: "<< basket.m_price <<endl;
        os.precision(matchoutput);
        os.unsetf(ios::fixed);
        
        
   }
    return os;
}

void Basket::dc(const Basket& newitem)
{
    m_cnt = newitem.m_cnt;
    m_price = newitem.m_price;
    if ( newitem.m_fruits != nullptr)
    {
        m_fruits = new Fruit[m_cnt];
        for (auto i = 0; i < m_cnt; ++i)
        {
            m_fruits[i] = newitem.m_fruits[i];
        }
    }
    else
    {
        m_fruits = nullptr;
    }
}

}
