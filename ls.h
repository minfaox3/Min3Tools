#ifndef LS_H
#define LS_H

#include"main.h"
#include"n_function.h"

bool ls(std::vector<std::string>Answer){
    if(Answer[1].empty()==true){
        std::string ls="ls "+currentwdir;
        system(ls.c_str());
    }
    else {
        if(Answer[1][0]=='/'){
            std::string ls="ls "+Answer[1];
            system(ls.c_str());
        }
        else {
            std::string ls="ls "+currentwdir+Answer[1];
            system(ls.c_str());
        }
    }
    return true;
}

void h_ls(){
    std::cout<<"ls: ls [directory]\n";
    std::cout<<"          Show includes file or directory in cwd or dir.\n";
}

#endif // LS_H
