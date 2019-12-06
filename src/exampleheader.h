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
    void print() const;
};

std::ostream& operator << (std::ostream &o,const CityData &a){
    o<<"x: " << a.latitude <<"\ty: " << a.longitude <<std::endl;
    return o;
}

void CityData::print() const
{
    std::cout << this->name << std::endl;
}

typedef std::map<std::string, std::vector<CityData> > CountryMap;


#endif // EXAMPLEHEADER_H
