#ifndef EXAMPLEHEADER_H
#define EXAMPLEHEADER_H
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
    
    CityData()
    {
        latitude = 0;
    }
    
    std::vector<CityData> fillWorldCities(std::istream& inputFile);
    void printCityNames(const std::vector<CityData> &worldCities);
};

typedef std::map<std::string, std::vector<CityData> > CountryMap;


#endif // EXAMPLEHEADER_H
