//  Atif Hammud Ali
//  Doctor.cpp
//  WS8
//  116743196
//  Created by atif on 7/22/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cstring>
#include "Doctor.h"

using namespace std;

namespace sdds
{
    Doctor::Doctor(const char* doctype,double sal,int hrs, bool isSpecialist) : Employee(sal,hrs)
{
    {
        strcpy(doc_type,doctype);
        this->isSpecialist = isSpecialist;
    }
}

    double Doctor::getSalary(int workedHours)

{
    if(workedHours > getmin_Hrs())
        {
          double  plusovertime = (get_Sal()*1.5)*(workedHours - getmin_Hrs());
            double normal = get_Sal()*getmin_Hrs();
            return isSpecialist?(normal+plusovertime+2000) : (normal + plusovertime);
        }
    else{
        double normal = get_Sal()*workedHours;
        double extra = normal + 2000;
        return this->isSpecialist?(extra):normal;
    }
    
}
    
    std::ostream& Doctor::display(std::ostream& out )
{
    
        cout<<"Doctor"<<endl;
    cout<<setw(16)<<right;
        cout<<"Type: "<<doc_type<<((this->isSpecialist)?" (specialist)":" ")<<endl;
    cout<<setw(16)<<right;
        cout<<"Pay Rate: "<<get_Sal()<<endl;
    cout<<setw(16)<<right;
        cout<<"Min Hours: "<<getmin_Hrs()<<endl;
    
        return cout;

}
    
     Doctor::~Doctor()
{
    
}


}
