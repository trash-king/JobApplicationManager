#include "resources.h"
#include <vector>
#include <fstream>

class JManager{

public:
JManager();
SavedApplicationTemplate createNewApplication(std::string date, std::string location, std::string jobtitle, std::string company);
SavedApplicationTemplate getArchivedApplication(std::string keyword);

protected:
std::vector<SavedApplicationTemplate> applicationBuffer; //keep multiple application objects in local memory
SavedApplicationTemplate accessArchivedData(std::string keyword);
void displayApplicationList(std::vector<SavedApplicationTemplate> application_vector);

private:
std::string dataFilePath = "applications.dat";
void saveApplicationToFile(const SavedApplicationTemplate& app);
std::vector<SavedApplicationTemplate> loadApplicationsFromFile();

};