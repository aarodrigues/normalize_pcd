#include <string>
#include <iostream>
#include <fstream>

namespace pcd_convert {

class Convert {

public:

Convert();

~Convert();

std::string getNewName(std::string fileName);

void replaceSubStrFile(std::string filepath, std::string find, std::string replace);

private:

};

}
