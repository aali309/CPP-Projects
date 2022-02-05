//Atif Hammud Ali
//  Cargo.h
//  ws3p1
//116743196
//  Created by atif on 6/9/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//aali309@myseneca.ca
//june 9, 2020

#ifndef SDDS_TRAIN_H
#define SDDS_TRAIN_H

#include "Cargo.h"

namespace sdds{
const char MAX_NAME = 30;

class Train{
    private:
    char t_Name[MAX_NAME + 1]; //must not be null or empty
    int t_Id; // must be > 0
    Cargo* cargo; //any object of type cargo
    
public:
    void initialize (const char* trainName, int tranId);
    bool isValid() const;
    void loadCargo(Cargo car);
    void unloadCargo();
    void display() const;
    
    
};


}
#endif /* Train_h */
