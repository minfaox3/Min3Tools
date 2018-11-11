#ifndef MKDIR_H
#define MKDIR_H

#include"main.h"

bool mkdir(std::vector<std::string>Answer){
    std::string nanos;
    if(Answer[1][0]=='~'){
        Answer[1].erase(0,2);
        nanos="mkdir "+userdir+Answer[1];
        system(nanos.c_str());
    }
    else if(Answer[1].find('/')==std::string::npos||Answer[1][0]!='/'){
        std::ifstream ifs(currentwdir+Answer[1]);
        nanos="mkdir "+currentwdir+Answer[1];
        system(nanos.c_str());
    }
    else{
        nanos="mkdir "+Answer[1];
        system(nanos.c_str());
    }
    return true;
}

void h_mkdir(){
    std::cout<<"mkdir: mkdir file\n";
    std::cout<<"          To make empty  DIR.\n";
}

#endif // MKDIR_H
