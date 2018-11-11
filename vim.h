#ifndef VIM_H
#define VIM_H

#include"main.h"

bool vim(std::vector<std::string>Answer){
    std::string nanos;
    if(Answer[1][0]=='~'){
        Answer[1].erase(0,2);
        nanos="vim "+userdir+Answer[1];
        system(nanos.c_str());
    }
    else if(Answer[1].find('/')==std::string::npos||Answer[1][0]!='/'){
        std::ifstream ifs(currentwdir+Answer[1]);
        nanos="vim "+currentwdir+Answer[1];
        system(nanos.c_str());
    }
    else{
        nanos="vim "+Answer[1];
        system(nanos.c_str());
    }
    return true;
}

void h_vim(){
    std::cout<<"vim: vim file\n";
    std::cout<<"          To edit  FILE(s).\n";
}

#endif // VIM_H
