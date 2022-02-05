//  Atif Hammud Ali
//  Engine.h
//  ws5p2
//  116743196
//  Created by atif on 6/26/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#ifndef SDDS_ENGINE_H
#define SDDS_ENGINE_H



namespace sdds{
 
const int TYPE_MAX_SIZE = 30;

class Engine
{
    double m_size; //engine size
    char m_type[TYPE_MAX_SIZE +1]; //Engine model type
    
public:
    Engine ();
    Engine(const char* type, double size);
    void setEmpty();
    double get() const;
    void display() const;
    ~Engine();
    
};

}
#endif
