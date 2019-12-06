
#include "citydata.h"


void CityData::print() const
{
    std::cout << this->name << std::endl;
}

std::ostream& operator << (std::ostream &outputStream,const CityData &a)
{
    outputStream <<"latitude: " << a.latitude;
    outputStream <<"\tlongitude: " << a.longitude << std::endl;
    return outputStream;
}

CityData::CityData(){
    latitude = 0;
}
