#ifndef EXAMPLEHEADER_H
#define EXAMPLEHEADER_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>



struct CityData
{   
    
    std::string name;
    std::string nameAscii;
    double latitude;
    short population;
    double longitude;
    
    CityData()
    {
        latitude = 0;
    }
    
    std::vector<CityData> fillWorldCities(std::istream& inputFile);
    void printCityNames(const std::vector<CityData> &worldCities);
};


#endif // EXAMPLEHEADER_H
