//  Atif Hammud Ali
//  ReadWritable.cpp
//  MS5
//  116743196
//  Created by atif on 7/25/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <iostream>
#include "ReadWritable.h"

namespace sdds {
    ReadWritable::ReadWritable() {
        commaSepFlag = false;
    }

    bool ReadWritable::isCsv()const {
        return commaSepFlag;
    }

    void ReadWritable::setCsv(bool value) {
        commaSepFlag = value;
    }

    ReadWritable::~ReadWritable() {

    }

    std::ostream& operator<<(std::ostream& os, const ReadWritable& RW) {
        RW.write(os);
        return os;
    }

    std::istream& operator>>(std::istream& is, ReadWritable& RW) {
        RW.read(is);
        return is;
    }
}
