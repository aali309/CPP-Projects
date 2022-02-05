//Atif Hammud Ali
//  Cargo.h
//  ws3p1
//116743196
//  Created by atif on 6/9/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//aali309@myseneca.ca
//june 9, 2020

#ifndef SDDS_CARGO_H
#define SDDS_CARGO_H

//#include "Train.h"

namespace sdds
{

const int MAX_DESC = 20;

struct Cargo
{
    char description[MAX_DESC + 1];
    double weight;

};


}


#endif /* Cargo_h */
