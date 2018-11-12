#ifndef RM_H
#define RM_H

#include"main.h"

bool rm(std::vector<std::string>Answer){
    std::string nanos;
    if(Answer[1]=="-r"){
        if(Answer[2][0]=='~'){
            Answer[2].erase(0,2);
            nanos="rm -r "+userdir+Answer[2];
            system(nanos.c_str());
        }
        else if(Answer[2].find('/')==std::string::npos||Answer[2][0]!='/'){
            std::ifstream ifs(currentwdir+Answer[2]);
            nanos="rm -r "+currentwdir+Answer[2];
            system(nanos.c_str());
        }
        else{
            nanos="rm -r "+Answer[2];
            std::cout<<"DB-"<<nanos<<"\n";
            system(nanos.c_str());
        }
    }
    else if(Answer[1][0]=='~'){
        Answer[1].erase(0,2);
        nanos="rm "+userdir+Answer[1];
        system(nanos.c_str());
    }
    else if(Answer[1].find('/')==std::string::npos||Answer[1][0]!='/'){
        std::ifstream ifs(currentwdir+Answer[1]);
        nanos="rm "+currentwdir+Answer[1];
        system(nanos.c_str());
    }
    else{
        nanos="rm "+Answer[1];
        system(nanos.c_str());
    }
    return true;
}

void h_rm(){
    std::cout<<"rm: rm [-r] file\n";
    std::cout<<"          To remove  FILE or DIR.\n";
    std::cout<<"          Options:\n";
    std::cout<<"                    -r          RM DIR.\n";
}

#endif // RM_H
