//  Atif Hammud Ali
//  Parking.h
//  MS6
//  aali309@myseneca.ca
//  Created by atif on 8/2/20.
//  Copyright � 2020 Atif Hammud Ali. All rights reserved.
//  116743196

#ifndef SDDS_PARKING_H_
#define SDDS_PARKING_H_

#include "Menu.h"
#include "Car.h"
#include "Motorcycle.h"

const int MAXSPOTS = 100;

namespace sdds {
    class Parking : public Menu {
    private:
        char* fileName;
        Menu parkingMenu;
        Menu vehicleMenu;
        int numOfSpots;
        Vehicle* spots[MAXSPOTS];
        int numOfParkedVeh;

        void setEmpty();
        bool isEmpty() const;
        void parkingStatus() const;
        void parkVehicle();
        void returnVehicle();
        void vehicleList() const;
        bool parkingClose();
        bool exitApp() const;
        bool loadFile();
        void saveFile() const;
    public:
        using Menu::Menu;

        Parking();
        Parking(const char* datafile, int noOfSpots);
        Parking(const Parking& pCopy) = delete;
        Parking& operator=(const Parking& pCopy) = delete;
        void setFileName(const char* fName);
        int run();
        ~Parking();
    };
}
#endif
