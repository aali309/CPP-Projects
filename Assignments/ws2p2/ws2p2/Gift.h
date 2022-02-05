//  Atif Hammud Ali
//  main.cpp
//  WS02Part2
//  aali309@myseneca.ca
//  Created by atif on 6/2/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  116743196

#ifndef SSDS_GIFT_H
#define SSDS_GIFT_H

namespace sdds
{
const int MAX_DESC = 15;
const double MAX_PRICE = 999.999;
const int MAX_WRAP = 20;// new Global constant added that represent the maximum number of wrapping layers one gift can have

struct Wrapping // new custom type
{
    char* m_pattern; //dynamically alloctaed array of characters
};

struct Gift
{
    char m_description[MAX_DESC + 1];
    double m_price;
    int m_units;
    int m_wrapLayers;
    Wrapping* m_wrap;
    
};

void gifting(char* desc);
void gifting(double& price);
void gifting(int& units);
void display(const Gift& theGift);

bool wrap(Gift& theGift);
bool unwrap(Gift& theGift);
void gifting(Gift& theGift);


}

//void display(const Gift& theGift);

#endif //GIFT_H

