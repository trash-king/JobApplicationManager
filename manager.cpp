#include "manager.h"

JManager::JManager(){

std::vector applicationList = loadApplicationsFromFile();

};

std::vector<SavedApplicationTemplate> loadApplicationsFromFile(){

};

void JManager::displayApplicationList(std::vector<SavedApplicationTemplate> application_vector){
//currently does nothing until window is decided upon
};

void JManager::saveApplicationToFile(const SavedApplicationTemplate& app){

};

SavedApplicationTemplate JManager::getArchivedApplication(std::string keyword){

};

