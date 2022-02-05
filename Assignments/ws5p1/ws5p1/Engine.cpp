//  Atif Hammud Ali
//  Engine.cpp
//  ws5p1
//  116743196
//  Created by atif on 6/22/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#include <iostream>
#include <cstring>
#include "Engine.h"

using namespace std;

namespace sdds{

Engine::Engine ()
{
    setEmpty();
}

Engine::Engine(const char* type, double size)
{
    if ( size > 0 && type != nullptr && type[0] != '\0')
        {
            m_size = size;
            strcpy(m_type, type);
        }
    else
        {
            setEmpty();
        }
}

void Engine::setEmpty()
{
    m_size = 0.0;
    m_type[0] = '\0';
}

double Engine::get() const
{
    return m_size;
}

void Engine::display() const
{
    if (m_size > 0 && m_type[0] != '\0' )
    {
        cout << get() << " liters - " << m_type << endl;
    }
}

Engine::~Engine() {}

}
