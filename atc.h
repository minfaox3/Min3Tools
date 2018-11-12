#ifndef ATC_H
#define ATC_H

#include"main.h"
#include"n_function.h"

void sayans(std::vector<std::string> Answer){
    Answer.push_back("");
    /*for(int i=0;i++)
    if(Answer[0]=="exit")return exita(Answer);
    else if(Answer[0]=="help"||Answer[0]=="-h")return help(Answer);*/
}

bool atc1x00(){
    std::vector<std::string>Answer;
    std::string Ans;
    std::cout<<"Hello.\n";
    std::cout<<"Who are you?\n";
    std::getline(std::cin,Ans);
    Answer=SplitStr(Ans,' ');
    sayans(Answer);
    while(true){
        std::getline(std::cin,Ans);
        Answer=SplitStr(Ans,' ');
        sayans(Answer);
    }
    return true;
}

void h_atc(){
    std::cout<<"atc: atc\n";
    std::cout<<"          Art Thikable Computer.\n";
    std::cout<<"          Options:\n";
    std::cout<<"                    none.\n";
}

#endif // ATC_H
