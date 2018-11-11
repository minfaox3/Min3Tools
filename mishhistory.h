#ifndef MISHHISTORY_H
#define MISHHISTORY_H

#include"main.h"

std::vector<std::string>mishhistory(bool wc,std::string Ans){
    std::vector<std::string> mishhis;
    std::string his;
    if(wc==true){
        std::ofstream ofs(userdir+".mish_history",std::ios::app);
        ofs<<Ans<<"\n";
        ofs.close();
    }
    else if(wc==false){
        std::ifstream ifs(userdir+".mish_history");
        while (std::getline(ifs,his)){
            mishhis.push_back(his);
        }
        ifs.close();
    }
    return mishhis;
}

#endif // MISHHISTORY_H
