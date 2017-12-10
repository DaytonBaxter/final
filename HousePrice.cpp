// File: HousePrice
// Created by Hugo Valle on 11/22/2017.
// Copyright (c) 2017 WSU
//

#include "HousePrice.h"

HousePrice::HousePrice()
{

}

HousePrice::HousePrice(int id, int houseNum, const string &street, const string &city, const string &state, int zip, double price)
{

}

double HousePrice::getPrice() const
{
    return price;
}

const string &HousePrice::getState() const
{
    return state;
}

ostream &operator<<(ostream &os, const HousePrice &price)
{
    return os <<"id: " << price.id << " number: " << price.houseNum << " street: " << price.street << " city: "
              << price.city << " state: " << price.state << " zip code: " << price.zip << " price: "
              << price.price << endl;
}














