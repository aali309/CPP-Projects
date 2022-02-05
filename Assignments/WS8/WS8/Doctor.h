//  Atif Hammud Ali
//  Doctor.h
//  WS8
//  116743196
//  Created by atif on 7/22/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#ifndef SDDS_DOCTOR_H
#define SDDS_DOCTOR_H
#include "Employee.h"
 
namespace sdds
{
class Doctor : public Employee
{
    char doc_type[32+1];
    bool isSpecialist{false};
    
public:
    Doctor(const char* doctype,double sal,int hrs, bool isSpecialist = false);
    double getSalary(int workedHours);
    std::ostream& display(std::ostream& out = std::cout);
    virtual ~Doctor();
};

}


#endif /* Doctor_h */
