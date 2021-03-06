// File: HouseFunc
// Created by Hugo Valle on 11/22/2017.
// Copyright (c) 2017 WSU
//

#include <iostream>
#include <vector>
#include <map>
#include "HouseFunc.h"
#include "HousePrice.h"
#include "csv.h" // library to read csv files
#include <algorithm>

using namespace std;

/*!
 * Read CSV Mock Data. Parses each record in the file to
 * an object of HousePrice house. Then, populate a vector
 * of HousePrice objects with all the records.
 * It uses special library to parse CSV file "csv.h"
 * @param fileIn File name <string>
 * @param hp Reference to Vector of HousePrice Objects
 */
void readCSV(const string fileIn,vector<HousePrice>& hp)
{
    io::CSVReader<7> in("MOCK_DATA.csv");
    in.read_header(io::ignore_extra_column, "id", "number", "street", "city", "state", "postalCode", "price");
    int id;
    int number;
    string street;
    string city;
    string state;
    int postalCode;
    double price;
    while (in.read_row(id, number, street, city, state, postalCode, price))
    {
        hp.insert;
    }

}


/*!
 * Sort the Vector of HousePrice Objects by price. Display the most affordable
 * and the most expensive house from the vector.
 * @param hp Reference to vector<HousePrice>
 */
void houseMarketValues(vector<HousePrice> &hp)
{
    // Sort by Price
    std::sort(hp.begin(), hp.end());
    for (auto a : hp)
    {
        std::cout << a << " ";
    }
    std:: cout << "Most affordable: " << hp.at(1)
               << "Most Expensive: " << hp.at(1000) << endl;
}


/*!
 * Sort the Vector of HousePrice Objects by state. Display the
 * number of houses per state.
 * It uses a map to count instances per state.
 * @param hp Reference to vector<HousePrice>
 */
void houseMarketPerState(vector<HousePrice> &hp)
{
    // Sort by State
    struct {
        bool operator()(int a, int b) const
        {
            return a < b;
        }
    } customLess;
    std::sort(hp.begin(), hp.end(), customLess);
    for (auto a : hp) {
        std::cout << a << " ";
    }
}
