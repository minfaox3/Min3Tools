#ifndef EXIT_H
#define EXIT_H

#include"main.h"

bool exita(std::vector<std::string> Answer){
    Answer.push_back(" ");
    if(Answer[1]=="-n"){
        system(terminal.c_str());
        std::cout<<"Goodbye!\n";
        exit(0);
    }
    else if(Answer[1]==""){
        std::cout<<"Goodbye!\n";
        exit(0);
    }
    else std::cout<<"Unknown option '"<<Answer[1]<<"'.\n";
    return true;
}

void h_exit(){
    std::cout<<"exit: exit [-option]\n";
    std::cout<<"          To end this application.\n\n";
    std::cout<<"          Options:\n";
    std::cout<<"                    -n          End applicaton and make new terminal.(Set up ~/.min3toolsrc)\n";
}

#endif // EXIT_H
