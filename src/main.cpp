#include "../include/convert.hpp"

int main(int argc, char **argv){

    pcd_convert::Convert convert;

    if(argc > 1){
        if(argc == 4){
            convert.replaceSubStrFile(argv[1], argv[2],argv[3]);
        }else{
            convert.replaceSubStrFile(argv[1], "inf","NaN");
        }
    }else{
        std::cout << "1. Please inform file path+name as parameter to replace inf to NaN" << std::endl;
        std::cout << "2. Please inform file path+name, substr to find and substrig to replace as parameters" << std::endl;
    }

    return 0;
}