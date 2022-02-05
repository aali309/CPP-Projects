//  Atif Hammud Ali
//  Utils.cpp
//  MS4
//  116743196
//  Created by atif on 7/21/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <cctype>
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

}

