/*******************************************************************************
 *
 * Workshop 9
 *
 * 1) Download the dataset (https://simplemaps.com/data/world-cities), unzip and use it (.csv) in current workshop.
 *
 * 2) Create a vector<vector<string>> worldCities (vector of lines) 
 * where you will store the data. Use worldCities for next tasks.
 *
 * 3) Create a function called howManyCountries. 
 * You should count countries and print them out.
 *
 * 4) Create a function which prints countries and their capitals.
 *
 * 5) Create a function called uninhabitedLongitude. You should find longitudes (rounding to ceil, 20.7458 -> 20) where
 * there are no cities and print these longitudes out.
 *
 * 6) Find and save to file "population.txt" population by countries and cities. (use map<string,map<string,int>>).
 * If there are no info in population field use "?"-sign. Table should be looks like:
 * Russia: N_1
 * -> Moscow : N_1_1 / N_1
 * -> Saint-Petersburg : N_1_2 / N_1
 * -> ...
 *
 * USA: N_M
 * -> Chicago : N_2_1 / N_2
 * -> NY : N_2_2 / N_2
 * ->
 * ...
 *
 * where N_i -- population of considered country (if not filled use "?"),
 * N_i_i -- population of i-city (if not filled use "?"),
 * N_i_i / N_i  population of the city relative to the country ("?" if some field is not filled)
 *
 * 6.1) Create a function to print some country and its info.
 *
 * 7) Create a structure CityCoordinates for latitude and longitude. Implement methods:
 *
 * 7.1) print (in following format: latitude: N, longitude: M)
 * 7.2) return distance (distance between cities (two paired coordinates -- distance(pair(lat_1,lng_1),pair(lat_2,lng_2))
 * 7.3) to be continued...
 ******************************************************************************/
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>




std::vector< std::vector<std::string> > fillWorldCities(std::istream& inputFile)
{
    std::vector<std::vector<std::string>> worldCities;
    
    std::string line;
    std::vector <std::string> lineVector;
    while (!inputFile.eof() && inputFile.good())
    {
        lineVector.clear();
        std::getline (inputFile, line);
        std::stringstream ss(line);
        std::string token;

        while (!ss.eof() && ss.good())
        {
            std::getline(ss, token,',');
            lineVector.push_back(token);
        }
        worldCities.push_back(lineVector);
    }

    return worldCities;
}



int main ()
{
    
    std::vector<std::vector<std::string>> worldCities;
    
    const std::string INP_FILE_NAME = "/home/georgii/WORK/DSBA/repositories/workshop8/workshop8/tasks/input.csv";
    std::ifstream inputFile;
    inputFile.open(INP_FILE_NAME);
    
    
    

}
