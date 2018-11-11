#ifndef CAT_H
#define CAT_H

#include"main.h"

bool cat(std::vector<std::string>Answer){
    if(Answer[1][0]=='~'){
        Answer[1].erase(0,2);
        std::ifstream ifs(userdir+Answer[1]);
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
                    if(ifs.eof())return true;
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
    }
    else if(Answer[1].find('/')==std::string::npos||Answer[1][0]!='/'){
        std::ifstream ifs(currentwdir+Answer[1]);
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
                    if(ifs.eof())return true;
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
    }
    else{
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
                    if(ifs.eof())return true;
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
    }
    return true;
}

void h_cat(){
    std::cout<<"cat: cat file [-l line]\n";
    std::cout<<"          Concatenate FILE(s) to standard output.\n";
    std::cout<<"          Options:\n";
    std::cout<<"                    -l line          line is number of output lines.\n";
}

#endif // CAT_H
