//  Atif Hammud Ali
//  main.cpp
//  WS02Part1
//  aali309@myseneca.ca
//  Created by atif on 6/2/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  116743196

#include <iostream>
#include "Gift.h"
using namespace std;

namespace sdds{
void gifting(char* desc)
{
    cout <<"Enter gift description: ";
    cin.width(MAX_DESC + 1);
    cin >> desc;
    
}

void gifting(double& price)
{
    do
    {
        cout <<"Enter gift price: ";
        cin >> price;
        
        if (price < 0 || price > MAX_PRICE)
        {
            cout <<"Gift price must be between 0 and " <<MAX_PRICE <<endl;
        }
        
    }while (price < 0 || price > MAX_PRICE);
}
void gifting(int& units)
{
    do
    {
    cout <<"Enter gift units: ";
        cin >> units;
        if (units < 1)
        {
            cout <<"Gift units must be at least 1" <<endl;
        }
    }while (units < 1);
}
void display(const Gift& theGift)
{
    cout << "Gift Details:" <<endl;
    cout << " Description: " << theGift.m_description <<endl;
    cout.width(14);
    cout << "Price: " << theGift.m_price <<endl;
    cout.width(14);
    cout <<"Units: " << theGift.m_units <<endl;
    
}


}
