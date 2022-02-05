//  Atif Hammud Ali
//  Engineer.cpp
//  WS8
//  116743196
//  Created by atif on 7/22/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <cstdio>
#include <iostream>
#include <cstring>
#include "Engineer.h"

using namespace std;
 namespace sdds
{

Engineer::Engineer(double sal, int l) : Employee(sal,30)
{
    level = l;
}

double Engineer::getSalary(int workedHours)
{
    if (workedHours >= getmin_Hrs())
    {
        double lev = 40*level;
        return ((workedHours*get_Sal())+lev);
    }
    else
    {
        double lev = level*40;
        double salary = (workedHours*get_Sal())+lev;
        return salary * .8;
    }
}

std::ostream& Engineer::display(std::ostream& out )
{
    cout <<"Engineer"<<endl;
    cout <<"          Level: "<<level <<endl;
    cout <<"       Pay Rate: "<<get_Sal()<<endl;
    cout<<"      Min Hours: "<<getmin_Hrs()<<endl;
    
    return cout;
}
Engineer:: ~Engineer()
{
    
}


}
