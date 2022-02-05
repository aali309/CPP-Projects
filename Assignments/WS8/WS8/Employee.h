//  Atif Hammud Ali
//  Employee.h
//  WS8
//  116743196
//  Created by atif on 7/22/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#ifndef SDDS_EMPLOYEE_H
#define SDDS_EMPLOYEE_H

namespace sdds
{

    class Employee{
        const int min_Hrs;
        double hr_Sal;
        
    protected:
        int getmin_Hrs() const;
        double get_Sal() const;
        
    public:
        Employee(double sal, const int hrs);
        virtual double getSalary(int workedHours) = 0;
        virtual std::ostream& display(std::ostream& out = std::cout) = 0;
        virtual ~Employee();
        
    
};
std::ostream &operator<<(std::ostream &os, Employee &employee);

}

#endif /* Employee_h */
