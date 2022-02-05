//  Atif Hammud Ali
//  Employee.cpp
//  WS9
//  116743196
//  Created by atif on 7/28/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <iomanip>
#include <cstring>
#include "Employee.h"
namespace sict{

  void Employee::set(int stno, const char* name, double salary){
    _empno = stno;
    std::strcpy(_name, name);
    _salary = salary;
  }
  Employee::Employee(int stno, const char* name, double salary){
    set(stno, name, salary);
  }
  std::ostream& Employee::display(std::ostream& os)const{
    return os << _empno << " " << _name << ", " << std::setprecision(2) << std::fixed << _salary;
  }
  bool Employee::operator<=(const Employee& E)const{
    return _empno <= E._empno;
  }
  bool Employee::operator>=(const Employee& E)const{
    return _empno >= E._empno;
  }
  Employee::operator const char*()const{
    return _name;
  }
}
