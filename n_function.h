#ifndef N_FUNCTION_H
#define N_FUNCTION_H

#include"main.h"

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

std::string GetParantDir(const std::string &str, char sep){
    std::vector<std::string> vs;
    std::stringstream ss(str);
    std::string buf,dir="/";
    while( std::getline(ss, buf, sep) ) {
        vs.push_back(buf);
    }
    vs.pop_back();
    for(int i=0;i<vs.size();i++){
        dir=dir+vs[i]+"/";
    }
    return dir;
}

bool IsDirExist(std::string dirname){
    struct stat statBuf;
    if(stat(dirname.c_str(),&statBuf)!=0)return false;
    return true;
}

#endif // N_FUNCTION_H
