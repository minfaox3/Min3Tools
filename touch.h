#ifndef TOUCH_H
#define TOUCH_H

#include"main.h"

bool touch(std::vector<std::string>Answer){
    std::string nanos;
    if(Answer[1][0]=='~'){
        Answer[1].erase(0,2);
        nanos="touch "+userdir+Answer[1];
        system(nanos.c_str());
    }
    else if(Answer[1].find('/')==std::string::npos||Answer[1][0]!='/'){
        std::ifstream ifs(currentwdir+Answer[1]);
        nanos="touch "+currentwdir+Answer[1];
        system(nanos.c_str());
    }
    else{
        nanos="touch "+Answer[1];
        system(nanos.c_str());
    }
    return true;
}

void h_touch(){
    std::cout<<"touch: touch file\n";
    std::cout<<"          To make empty  FILE.\n";
}

#endif // TOUCH_H
