//  Atif Hammud Ali
//  ReadWritable.cpp
//  WS3
//  116743196
//  Created by atif on 7/20/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <iostream>
#include "ReadWritable.h"

namespace sdds{

ReadWritable::ReadWritable()
{
    flag = false;
}

bool ReadWritable::isCsv()const
{
    //return value;
    return flag;
    
}
void ReadWritable::setCsv(bool value)
{
    flag = value;
}
//virtual std::ostream& write(std::ostream& ostr = std::cout) const = 0;
//virtual std::istream& read(std::istream& istr = std::cin) = 0;
ReadWritable::~ReadWritable()
{
    
}
std::ostream& operator<<(std::ostream& os, const ReadWritable& RW)
{
    RW.write(os);
    return os;
}
std::istream& operator>>(std::istream& is,ReadWritable& RW)
{
    RW.read(is);
    return is;
}
}

