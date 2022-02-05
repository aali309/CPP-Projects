//  Atif Hammud Ali
//  Employee.cpp
//  WS8
//  116743196
//  Created by atif on 7/22/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <iostream>
#include "Employee.h"

using namespace std;
namespace sdds{


      int Employee::getmin_Hrs() const
{
    return this->min_Hrs;
}

       double Employee::get_Sal() const
{
    return this->hr_Sal;
}

    Employee::Employee(double sal, const int hrs) : min_Hrs(hrs)
{
    this->hr_Sal = sal;
    
}

std::ostream &operator<<(std::ostream &os, Employee &employee)
{
    return employee.display(os);
}
    Employee:: ~Employee()
{
    
}

}
