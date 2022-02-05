//  Atif Hammud Ali
//  ReadWritable.h
//  WS3
//  116743196
//  Created by atif on 7/20/20.
//  Copyright © 2020 Atif Hammud Ali. All rights reserved.
//  aali309@myseneca.ca

#ifndef READWRITABLE_H
#define READWRITABLE_H

namespace sdds
{
   
class ReadWritable
{
    bool flag;
    
public:
    ReadWritable();
    bool isCsv()const;
    void setCsv(bool value);
    virtual std::ostream& write(std::ostream& ostr = std::cout) const = 0;
    virtual std::istream& read(std::istream& istr = std::cin) = 0;
    virtual ~ReadWritable();

};
std::ostream& operator<<(std::ostream& os, const ReadWritable& RW);
std::istream& operator>>(std::istream& is,ReadWritable& RW);

}


#endif /* ReadWritable_h */
