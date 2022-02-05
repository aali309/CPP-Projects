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
        char* m_name; 
        int m_dob;  // (<=2020)
        int m_power;  //(>=0)
        bool m_super;
        int m_level; //(>=0)
    public:
        Saiyan();//default constructor
        Saiyan(const char* name, int dob, int power);//custom constructor
        void setEmpty(); //setting to safe empty state
        bool fight(Saiyan& other);
        void display() const;
        bool isValid() const;
        bool isSuper() const;
        void set(const char* name, int dob,int power,int level = 0, bool super = false);
        void powerup();
        ~Saiyan();//destructor
        
        
    };

}
#endif /* Saiyan_h */
