#include "resources.h"

SavedApplicationTemplate::SavedApplicationTemplate(){
    std::string date;
    std::string title;
    std::string name;
    std::string loc;

    std::cin >> date;
    std::cin >> title;
    std::cin >> name;
    std::cin >> loc;

    //from GUI pull entered data
    setDate(date);
    setJobTitle(title);
    setEmployerName(name);
    setLocation(loc);
};

std::string SavedApplicationTemplate::getDate(){
    return this->date;
};

std::string SavedApplicationTemplate::getEmployerName(){
    return this->employername;
};

std::string SavedApplicationTemplate::getJobTitle(){
    return this->jobtitle;
};

std::string SavedApplicationTemplate::getLocation(){
    return this->location;
};

void SavedApplicationTemplate::setDate(std::string date){
    //TODO Interface this function with C++ user interface library of choice.
    
};

void SavedApplicationTemplate::setJobTitle(std::string jobtitle){
    //TODO Interface this function with C++ user interface library of choice.
};

void SavedApplicationTemplate::setEmployerName(std::string employername){
    //TODO Interface this function with C++ user interface library of choice.
};

void SavedApplicationTemplate::setLocation(std::string location){
    //TODO Interface this function with C++ user interface library of choice.
};