//  Atif Hammud Ali
//  Utils.cpp
//  MS5
//  116743196
//  Created by atif on 7/25/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <cctype>
#include <iostream>
#include <string>
#include "Utils.h"

namespace sdds
{
  char* toUpper(char* str)
{
    for (auto i = 0; str[i] != '\0'; ++i)
    {
        str[i] = toupper(str[i]);
    }
    return str;
}
  bool strICmp(const char* str1, const char* str2)
{
    bool result = false;
    char size1 = strlen(str1);
    char size2 = strlen(str2);
    if (size1 == size2)
    {
        char* tmp1 = new char [size1 +1];
        strcpy(tmp1, str1);
        toUpper(tmp1);
        
        char* tmp2 = new char[size1 +1];
        strcpy(tmp2, str2);
        toUpper(tmp2);
        if (strcmp(tmp1,tmp2) == 0)
        {
            result = true;
        }
        delete [] tmp1;
        tmp1 = nullptr;
        delete [] tmp2;
        tmp2 = nullptr;
    }
    return result;
}

bool yes() {
    std::string option;
    bool result, valid;
    do {
        valid = true;
        std::cin >> option;
        std::cin.ignore(1000, '\n');

        if (option == "Y" || option == "y") {
            result = true;
        }
        else if (option == "N" || option == "n") {
            result = false;
        }
        else {
            std::cout << "Invalid response, only (Y)es or (N)o are acceptable, retry: ";
            valid = false;
        }
    } while (!valid);

    return result;
}

}

