#ifndef COMMAND_H
#define COMMAND_H

#include "main.h"

std::vector<std::string> SplitStr(const std::string &str, char sep){
    std::vector<std::string> vs;
    std::stringstream ss(str);
    std::string buf,buff=str;
    if(buff.find(std::string("echo"))==0){
        vs.push_back("echo");
        buff.erase(0,5);
        vs.push_back(buff);
    }
    else{
        while( std::getline(ss, buf, sep) ) {
            vs.push_back(buf);
        }
    }
    return vs;
}

bool command(std::vector<std::string> Answer){
        Answer.push_back("");
        if(Answer[0]=="exit"){
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
        else if(Answer[0]=="help"||Answer[0]=="-h"){
        if(Answer[1]=="exit"){
            std::cout<<"exit: exit [-option]\n";
            std::cout<<"          To end this application.\n\n";
            std::cout<<"          Options:\n";
            std::cout<<"                    -n          End applicaton and make new terminal.(Set up ~/.min3toolsrc)\n";
        }
        else if(Answer[1]=="echo"){
            std::cout<<"echo: echo [arg ...]\n";
            std::cout<<"          Write arguments to the standard output.\n";
        }
        else if(Answer[1]=="help"){
            std::cout<<"help: help [command]\n";
            std::cout<<"          Display information about builtin commands.\n";
            std::cout<<"          Options:\n";
            std::cout<<"                    command          Show more information of name.\n";
        }
        else if(Answer[1]=="cat"){
            std::cout<<"cat: cat file [-l line]\n";
            std::cout<<"          Concatenate FILE(s) to standard output.\n";
            std::cout<<"          Options:\n";
            std::cout<<"                    -l line          line is number of output lines.\n";
        }
        else if(Answer[1]==""){
            std::cout<<"Min3Tools, version 0.0.1-beta (x86_x64-unkown-linux)\n";
            std::cout<<"These are builtin commands.\n";
            std::cout<<"If you type 'help $name', then you can get more information.\n";
            std::cout<<"\nIf you find '*' front of command, it is not available.\n";
            std::cout<<"help(-h) [command]          exit [-option]\n";
            std::cout<<"echo [arg ...]              cat file [-l line]\n";
        }
        else std::cout<<"Unkown command '"<<Answer[1]<<"'.\n";
        return true;
    }

    else if(Answer[0]=="echo"){
        std::cout<<Answer[1]<<"\n";
        return true;
    }
    else if(Answer[0]=="cat"){
        if(Answer[1][0]=='~'){
            Answer[1].erase(0,2);
            Answer[1]=userdir+Answer[1];
        }
        std::ifstream ifs(Answer[1]);
        if(ifs.fail()){
            std::cout<<"Fail\n";
            return true;
        }
        if(Answer[2]=="-l"){
            std::string str;
            if(std::all_of(Answer[3].cbegin(),Answer[3].cend(),isdigit)){
                for(int i=0;i<std::stoi(Answer[3]);i++){
                    std::getline(ifs,str);
                    std::cout<<str<<"\n";
                }
            }
            else{
                std::cout<<"Unknown number '"<<Answer[3]<<"'.\n";
                return true;
            }
        }
        else if(Answer[2]!=""){
            std::cout<<"Unknown option '"<<Answer[2]<<"'.\n";
            return true;
        }
        else{
            std::istreambuf_iterator<char> it(ifs);
            std::istreambuf_iterator<char> last;
            std::string str(it,last);
            std::cout<<str<<"\n";
        }
        ifs.close();
        return true;
    }
    else{
        return  false;
     }
}

#endif // COMMAND_H
