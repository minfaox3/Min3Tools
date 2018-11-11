#ifndef NANO_H
#define NANO_H

#include"main.h"

bool nano(std::vector<std::string>Answer){
    std::string nanos;
    if(Answer[1][0]=='~'){
        Answer[1].erase(0,2);
        nanos="nano "+userdir+Answer[1];
        system(nanos.c_str());
    }
    else if(Answer[1].find('/')==std::string::npos||Answer[1][0]!='/'){
        std::ifstream ifs(currentwdir+Answer[1]);
        nanos="nano "+currentwdir+Answer[1];
        system(nanos.c_str());
    }
    else{
        nanos="nano "+Answer[1];
        system(nanos.c_str());
    }
    return true;
}

void h_nano(){
    std::cout<<"nano: nano file\n";
    std::cout<<"          To edit  FILE(s).\n";
}

#endif // NANO_H
