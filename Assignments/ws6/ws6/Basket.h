// Atif Ali
//  Basket.h
//  ws6
//  116743196
//  Created by atif on 7/6/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#ifndef SDDS_BASKET_H
#define SDDS_BASKET_H
#include <iostream>
using namespace std;

namespace sdds
{

struct Fruit
{
    char m_name[30+1];
    double m_qty;
};

class Basket
{
    Fruit* m_fruits = nullptr;
    int m_cnt;
    double m_price;
    void dc(const Basket& newitem);
    
public:
        Basket();
        void setEmpty();
        Basket(Fruit* fruit , int cnt, double price);
        Basket(const Basket& objbask);
        Basket& operator=(const Basket& obj);
        void setPrice(double price);
        operator bool();
        Basket& operator += (Fruit fruit);
        friend ostream& operator << (ostream& os, Basket& basket);
    ~Basket();
};

}

#endif /* Basket_h */
