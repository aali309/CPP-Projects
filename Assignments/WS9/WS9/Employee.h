//  Atif Hammud Ali
//  Employee.h
//  WS9
//  116743196
//  Created by atif on 7/28/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include "Displayable.h"
#ifndef SICT_EMPLOYEE_H_
#define SICT_EMPLOYEE_H_
namespace sict{
  class Employee :public Displayable{
    int _empno;
    char _name[41];
    double _salary;
    void set(int stno, const char* name, double salary);
  public:
    Employee(int stno, const char* name = "no name", double salary = 0.0);
    std::ostream& display(std::ostream& os)const;
    bool operator<=(const Employee& E)const;
    bool operator>=(const Employee& E)const;
    operator const char*()const;
  };



}
#endif
