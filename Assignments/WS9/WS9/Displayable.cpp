//  Atif Hammud Ali
//  Displayable.cpp
//  WS9
//  116743196
//  Created by atif on 7/28/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include "Displayable.h"
namespace sict{
  std::ostream& operator<<(std::ostream& os, const Displayable& D){
    return D.display(os);
  }
}
