//  Atif Hammud Ali
//  Utils.cpp
//  MS1
//  aali309@myseneca.ca
//  Created by atif on 7/13/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  116743196

#include <ctype.h>
#include "Utils.h"

using namespace std;

namespace sdds {
    bool isInt(const char s[]) {
        bool res = true;
        for (int i = 0; s[i] != '\0' && res; i++) {
            if (!isdigit(s[i])) {
                res = false;
            }
        }

        return res;
    }
}

