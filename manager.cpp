#include "manager.h"


JManager::JManager(){
//create window and associated buttons? I don't know what should be in the constructor yet
};

std::vector<SavedApplicationTemplate> loadApplicationsFromFile(){

};

void JManager::displayApplicationList(std::vector<SavedApplicationTemplate> application_vector){
//currently does nothing until window is decided upon
};

void JManager::saveApplicationToFile(const SavedApplicationTemplate& app){
    std::ofstream outputFile(this->dataFilePath, std::ios::binary);

    if(outputFile.is_open){
        size_1 = 
    }
};

SavedApplicationTemplate JManager::getArchivedApplication(std::string keyword){

};

