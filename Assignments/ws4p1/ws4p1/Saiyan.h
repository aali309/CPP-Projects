//  Atif Ali
//  Saiyan.h
//  ws4p1
//  116743196
//  Created by atif on 6/16/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca


#ifndef SDDS_SAIYAN_H
#define SDDS_SAIYAN_H

namespace sdds{
const int MAX_NAME = 31;
class Saiyan
    {
        char m_name[MAX_NAME +1];
        int m_dob;  // (<=2020)
        int m_power;  //(>=0)
        bool m_super;
        
    public:
        Saiyan();//default constructor
        Saiyan(const char* name, int dob, int power);//custom constructor
        void setEmpty(); //setting to safe empty state 
        bool fight(const Saiyan& other) const;
        void display() const;
        bool isValid() const;
        bool isSuper() const;
        void set(const char* name, int dob,int power,bool super = false);
        ~Saiyan();//destructor
        
        
    };

}
#endif /* Saiyan_h */
