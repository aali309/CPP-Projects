//  Atif Hammud Ali
//  main.cpp
//  WS02Part1
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

struct Gift
{
    char m_description[MAX_DESC + 1];
    double m_price;
    int m_units;
    
};

void gifting(char* desc);
void gifting(double& price);
void gifting(int& units);
void display(const Gift& theGift);
}
#endif //GIFT_H

