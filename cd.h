#ifndef CD_H
#define CD_H

#include "main.h"
#include "n_function.h"

bool cd(std::vector<std::string>Answer){
    if(Answer[1].empty()==true)return true;
    else if(Answer[1]==".."){
        currentwdir.erase(0,1);
        currentwdir=GetParantDir(currentwdir,'/');
    }
    else if(Answer[1][0]=='/')currentwdir=Answer[1]+"/";
    else if(IsDirExist(currentwdir+Answer[1])==true){
        currentwdir=currentwdir+Answer[1]+"/";
    }
    else std::cout<<Answer[1]<<" doesn't exist.\n";
    return true;
}

void h_cd(){
    std::cout<<"cd: cd [directory]\n";
    std::cout<<"          Change the shell working directory.\n";
    std::cout<<"          Change the current directory to DIR.  The default DIR is the value of the\n";
    std::cout<<"          HOME shell variable.\n\n";
    std::cout<<"          The variable CDPATH defines the search path for the directory containing\n";
    std::cout<<"          DIR.  Alternative directory names in CDPATH are separated by a colon (:).\n";
    std::cout<<"          A null directory name is the same as the current directory.  If DIR begins\n";
    std::cout<<"          with a slash (/), then CDPATH is not used.\n";
}

#endif // CD_H
