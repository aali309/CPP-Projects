//  Atif Hammud Ali
//  Menu.h
//  MS2
//  aali309@myseneca.ca
//  Created by atif on 7/16/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  116743196

#ifndef SDDS_MENU_H_
#define SDDS_MENU_H_
#include <iostream>
#include "Utils.h"

const int MAX_NO_OF_ITEMS = 10;

namespace sdds {

    class MenuItem {
        char* Menuitem;

        MenuItem();
        MenuItem(const char* item);
        void setItem(const char* item);
        MenuItem(const MenuItem& itemSrc) = delete;
        MenuItem& operator=(const MenuItem& itemSrc) = delete;
        std::ostream& display() const;
        ~MenuItem();
        friend class Menu;
    };

    class Menu {
        char* Title;
        MenuItem* MenuItems[MAX_NO_OF_ITEMS];
        int ItemNum;
        int Identation;
    public:
        Menu();
        Menu(const char* ttl, int identLev = 0);
        Menu(const Menu& menuSrc);
        Menu& operator=(const Menu& menuSrc);
        void setEmpty();
        void setTitle(const char* ttl);
        void setItems(MenuItem* const Items[], int num);
        void setIdentation(int identLev);
        operator bool() const;
        bool isEmpty() const;
        std::ostream& display() const;
        Menu& operator=(const char* ttl);
        void add(const char* newMenuItem);
        Menu& operator<<(const char* item);
        int run() const;
        operator int() const;
        ~Menu();
    };
}
#endif
