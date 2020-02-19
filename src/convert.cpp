#include "convert.hpp"
#include <sstream>
#include <boost/algorithm/string.hpp>


namespace pcd_convert {

 Convert::Convert() {
 }
 Convert::~Convert() {
 }

std::string Convert::getNewName(std::string fileName) {
     std::size_t found = fileName.find_last_of(".\\");
     std::string path = fileName.substr(0,found);
     std::string newName = path + "-converted.pcd";
     return newName;
}

 void Convert::replaceSubStrFile(std::string filepath, std::string find, std::string replace) {
     std::fstream inFile;
     std::ofstream newfile;
     inFile.open(filepath);

     if (!inFile) {
         std::cout << "Unable to open file";
         exit(1); // terminate with error
     }

     newfile.open(this->getNewName(filepath));
     std::string line;

     while (std::getline(inFile, line))
     {
         std::istringstream iss(line);
         std::string strLine = iss.str();
         boost::replace_all(strLine, find, replace);
         newfile << strLine + "\n";
     }

     inFile.close();
     newfile.close();
 }

}