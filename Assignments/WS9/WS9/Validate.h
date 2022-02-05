//  Atif Hammud Ali
//  Validate.h
//  WS9
//  116743196
//  Created by atif on 7/28/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#ifndef SICT_VALIDATE_H
#define SICT_VALIDATE_H

namespace sict{

template <typename T>
bool validate(const T& minimum, const T testValue[], int index,bool validation[])
{
    bool result = 1;
    for (auto i = 0; i < index; ++i)
    {
        if(testValue[i] >= minimum)
        {
           validation[i] = 1;
        }
        else
        {
            validation[i] = 0;
          result = 0;
        }
    }
    return result;
}


}




#endif /* Validate_h */
