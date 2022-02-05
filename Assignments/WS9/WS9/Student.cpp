//  Atif Hammud Ali
//  Student.cpp
//  WS9
//  116743196
//  Created by atif on 7/28/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <cstring>
#include "Student.h"
namespace sict{
  void Student::set(int stno, const char* name){
    _stno = stno;
    std::strcpy(_name, name);
  }
  Student::Student(int stno, const char* name){
    set(stno, name);
  }
  std::ostream& Student::display(std::ostream& os)const{
    return os << _stno << " " << _name;
  }
  bool Student::operator<=(const Student& S)const{
    return _stno <= S._stno;
  }
  bool Student::operator>=(const Student& S)const{
    return _stno >= S._stno;
  }
  Student::operator const char*()const{
    return _name;
  }

}
