#include <string>
#include <ctime>
#include <iostream>

class SavedApplicationTemplate{

public:
SavedApplicationTemplate();

void setDate(std::string date);
std::string getDate();

void setEmployerName(std::string employer);
std::string getEmployerName();

void setLocation(std::string location);
std::string getLocation();

void setJobTitle(std::string jobtitle);
std::string getJobTitle();

protected:
std::string date;
std::string employername;
std::string location;
std::string jobtitle;

private:


};