//  Atif Hammud Ali
//  Vehicle.h
//  MS5
//  11674196
//  Created by atif on 7/25/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#ifndef SDDS_VEHICLE_H_
#define SDDS_VEHICLE_H_

#include "ReadWritable.h"
#include "Utils.h"

const int MAXLEN = 8;

namespace sdds {
    class Vehicle : public ReadWritable {
        char licensePlate[MAXLEN + 1];
        char* make_model;
        int parkSpotNum;
        
    protected:
        void setEmpty();
        bool isEmpty() const;
        const char* getLicensePlate();
        const char* getMakeModel();
        void setMakeModel(const char* makeModel);
        
    public:
        Vehicle();
        Vehicle(const char* plate, const char* makeModel, int spotNum = 0);
        Vehicle(const Vehicle& vCopy) = delete;
        Vehicle& operator=(const Vehicle& vCopy) = delete;
        int getParkingSpot() const;
        void setParkingSpot(int spotNum);
        friend bool operator==(const Vehicle& v, const char* plate);
        friend bool operator==(const Vehicle& v1, const Vehicle& v2);
        std::istream& read(std::istream& istr = std::cin);
        std::ostream& write(std::ostream& ostr = std::cout) const;
        virtual ~Vehicle();
    };
    
}
#endif /* Vehicle_h */

