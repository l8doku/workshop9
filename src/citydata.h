#ifndef CITYDATA_H
#define CITYDATA_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>



struct CityData
{
    std::string name;
    std::string nameAscii;
    double latitude;
    double longitude;
    std::string country;
    int population;
    
    CityData();

    
    void print() const;
    
};

void printCityNames(const std::vector<CityData> &worldCities);



std::ostream& operator << (std::ostream &outputStream,const CityData &a);




typedef std::map<std::string, std::vector<CityData> > CountryMap;


#endif // CITYDATA_H
