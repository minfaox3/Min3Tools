#ifndef ECHO_H
#define ECHO_H

#include"main.h"

bool echo(std::vector<std::string>Answer){
    std::cout<<Answer[1]<<"\n";
    return true;
}

void h_echo(){
    std::cout<<"echo: echo [arg ...]\n";
    std::cout<<"          Write arguments to the standard output.\n";
}

#endif // ECHO_H
