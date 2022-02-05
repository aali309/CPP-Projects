//  Atif Hammud Ali
//  Parking.h
//  MS2
//  aali309@myseneca.ca
//  Created by atif on 7/16/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  116743196

#ifndef SDDS_PARKING_H_
#define SDDS_PARKING_H_

#include "Menu.h"

namespace sdds {
    class Parking : public Menu {
    private:
        char* fileName;
        Menu parkingMenu;
        Menu vehicleMenu;

        bool isEmpty() const;
        void parkingStatus() const;
        void parkVehicle() const;
        void returnVehicle() const;
        void vehicleList() const;
        bool parkingClose() const;
        bool exitApp() const;
        bool loadFile() const;
        void saveFile() const;
    public:
        using Menu::Menu;

        Parking();
        Parking(const char* fName);
        Parking(const Parking& pCopy) = delete;
        Parking& operator=(const Parking& pCopy) = delete;
        void setFileName(const char* fName);
        int run();
        ~Parking();
    };
}
#endif
