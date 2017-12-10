// File: HousePrice
// Created by Hugo Valle on 11/22/2017.
// Copyright (c) 2017 WSU
//

#ifndef HW8_HOUSEPRICE_H
#define HW8_HOUSEPRICE_H

#include <iostream>
using namespace std;

/*!
 * Class HousePrice
 */
class HousePrice
{
private:
    int id;
    int houseNum;
    string street;
    string city;
    string state;
    int zip;
    double price;
public:
    HousePrice();
    HousePrice(int id, int houseNum, const string &street, const string &city, const string &state, int zip, double price);
    double getPrice() const;
    const string &getState() const;
    friend ostream& operator << (ostream &os, const HousePrice &price);
};


#endif //HW8_HOUSEPRICE_H
