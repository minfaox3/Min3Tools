#ifndef HELP_H
#define HELP_H

#include"main.h"
#include"cd.h"
#include"ls.h"
#include"cat.h"
#include"exit.h"
#include"echo.h"

bool help(std::vector<std::string>Answer){
    if(Answer[1]=="exit")h_exit();
    else if(Answer[1]=="echo")h_echo();
    else if(Answer[1]=="help"){
        std::cout<<"help: help [command]\n";
        std::cout<<"          Display information about builtin commands.\n";
        std::cout<<"          Options:\n";
        std::cout<<"                    command          Show more information of name.\n";
    }
    else if(Answer[1]=="cat")h_cat();
    else if(Answer[1]=="cd")h_cd();
    else if(Answer[1]=="ls")h_ls();
    else if(Answer[1]==""){
        std::cout<<"mish is provided by Min3Tools, version 0.0.5-beta (x86_x64-unkown-linux)\n";
        std::cout<<"These are supported commands.\n";
        std::cout<<"If you type 'help $name', then you can get more information.\n";
        std::cout<<"\nIf you find '*' front of command, it is used GNU Core Utils.\n";
        std::cout<<"help(-h) [command]          exit [-option]\n";
        std::cout<<"echo [arg ...]              cat file [-l line]\n";
        std::cout<<"cd [directory]              *ls [directory]\n";
    }
    else std::cout<<"Unkown command '"<<Answer[1]<<"'.\n";
    return true;
}

#endif // HELP_H
