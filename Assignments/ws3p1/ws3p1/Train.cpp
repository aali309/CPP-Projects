//Atif Hammud Ali
//  Cargo.h
//  ws3p1
//116743196
//  Created by atif on 6/9/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//aali309@myseneca.ca
//june 9, 2020
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Train.h"
//#include "Cargo.h"

using namespace std;

namespace sdds{

void Train::initialize (const char* trainName, int trainId)
{
    if ( trainName == nullptr || strlen(trainName) == 0 || trainId < 1)
   {
        t_Name[0] = '\0';
        t_Id = 0;
     
    }
    else {
        strncpy(t_Name,trainName, MAX_NAME);
        t_Id = trainId;
        
    }

    cargo = nullptr;
}

bool Train::isValid() const
{
    bool result = true;
    
        if(t_Id == 0 || t_Name[0] == '\0')
    {
        result = false;

    }
        else {
            result = true;
            
        }
    return result;
}

void Train::loadCargo(Cargo car)
{

    cargo = new Cargo;
    strncpy(cargo->description, car.description, MAX_DESC);
    cargo->weight = car.weight;
}

void Train::unloadCargo()
{
    
    delete cargo;
    cargo = nullptr;
}

void Train::display() const
{
    cout <<"***Train Summary***"<<endl;

if(!isValid())
    {
        cout <<"This is an invalid train."<<endl;
    }
    else
    {
        cout <<"Name: "<< t_Name <<endl;
        cout <<"ID: "<<t_Id << endl;
         if (cargo == nullptr)
         {
             cout <<"No Cargo on this train" <<endl;
         }
         else
         {
             cout <<"Cargo: "<< cargo->description <<endl;
             cout <<"Weight: "<<cargo->weight <<endl;
         }
    }
}

}
