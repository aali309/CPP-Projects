//  Atif Hammud Ali
//  main.cpp
//  WS02Part2
//  aali309@myseneca.ca
//  Created by atif on 6/2/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  116743196
#include <string.h>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
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
    
    if (theGift.m_wrap == nullptr)
    {
        cout <<"Unwrapped!" <<endl;
    }
    else
    {
        cout << "Wrap Layers: " <<theGift.m_wrapLayers <<endl;
        for (auto i = 0; i < theGift.m_wrapLayers ; i++)
        {
            cout << "Wrap #" <<i+1 <<" -> " <<theGift.m_wrap[i].m_pattern <<endl;
        }
    }
    
}
bool wrap(Gift& theGift)
{
    bool value = false;
    if( theGift.m_wrapLayers != 0)
    {
        cout << "Gift is already wrapped!" <<endl;
        value = false;
    }
    else
    {
        cout << "Wrapping gifts..." <<endl;
        
        do
        {
            cout <<"Enter the number of wrapping layers for the Gift: ";
            cin >>theGift.m_wrapLayers;
            
            if ( theGift.m_wrapLayers < 1)
            {
                cout <<"Layers at minimum must be 1, try again." <<endl;
            }
        }while (theGift.m_wrapLayers < 1);
        
        theGift.m_wrap = new Wrapping[theGift.m_wrapLayers];
        char* pattern = nullptr;
        pattern = new char[MAX_WRAP + 1];
        for (auto i = 0; i < theGift.m_wrapLayers ; i++)
        {
            cout <<"Enter wrapping pattern #" << i + 1 <<": ";
            cin >>pattern;
            theGift.m_wrap[i].m_pattern = new char[strlen(pattern) + 1];
            strcpy(theGift.m_wrap[i].m_pattern, pattern);
        }
        delete[] pattern;
        pattern = nullptr;
        value = true;
        
    }
    return value;

}

bool unwrap(Gift& theGift)
{
    bool value = false;
    if (theGift.m_wrapLayers == 0)
    {
        cout <<"Gift isn't wrapped! Cannot unwrap." <<endl;
    }
    else
    {
        cout <<"Gift being unwrapped."<<endl;
        
        for(int i = 0; i < theGift.m_wrapLayers; i++)
        {
        delete[] theGift.m_wrap[i].m_pattern;
        theGift.m_wrap[i].m_pattern = nullptr;
        }
        delete[] theGift.m_wrap;
        theGift.m_wrap = nullptr;
        theGift.m_wrapLayers = 0;
        value = true;
    }
        return value;
 }

void gifting(Gift& theGift)
{
    cout <<"Preparing a gift..."<<endl;
    gifting(theGift.m_description);
    gifting(theGift.m_price);
    gifting(theGift.m_units);
    wrap(theGift);
}

}
