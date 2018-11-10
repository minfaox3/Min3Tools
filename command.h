#ifndef COMMAND_H
#define COMMAND_H

#include "main.h"
#include "help.h"
#include "cd.h"
#include "ls.h"
#include "cat.h"
#include "exit.h"
#include "echo.h"
#include "n_function.h"

bool command(std::vector<std::string> Answer){
        Answer.push_back("");
        if(Answer[0]=="exit")return exita(Answer);
        else if(Answer[0]=="help"||Answer[0]=="-h")return help(Answer);
        else if(Answer[0]=="echo")return echo(Answer);
        else if(Answer[0]=="cat")return cat(Answer);
        else if(Answer[0]=="cd")return cd(Answer);
        else if(Answer[0]=="ls")return ls(Answer);
        else if(Answer[0].empty()!=true){
            system(Answer[0].c_str());
            return true;
        }
        else{
            return  false;
        }
}

#endif // COMMAND_H
