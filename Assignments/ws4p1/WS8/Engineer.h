//  Atif Hammud Ali
//  Engineer.h
//  WS8
//  11674196
//  Created by atif on 7/22/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#ifndef SDDS_ENGINEER_H
#define SDDS_ENGINEER_H
#include "Employee.h"
namespace sdds
{
class Engineer : public Employee
{
    int level;
    
public:
    Engineer(double sal, int l);
    double getSalary(int workedHours);
    std::ostream& display(std::ostream& out = std::cout);
    virtual ~Engineer();
    
};

}


#endif /* Engineer_h */
