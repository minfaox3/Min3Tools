#ifndef MISHRC_H
#define MISHRC_H

#include"main.h"

void get_mishrc(){
    std::vector<std::string> mishrc;
    std::string bfrc;
    std::ifstream ifs(userdir+".mishrc");
    if(ifs.fail()){
        ifs.close();
        std::cout<<"Thank you to use mish!\n";
        std::ofstream ofs(userdir+".mishrc");
        ofs<<"#\n# ~/.mishrc\n#\n\n# If not running interactively, don't do anything\n";
        ofs<<"terminal=gnome-terminal\n";
        ofs.close();
        terminal="gnome-terminal";
    }
    else{
        while(std::getline(ifs,bfrc)){
            if(bfrc[0]!='#'&&bfrc.empty()!=true){mishrc.push_back(bfrc);}
        }
        ifs.close();
        for(std::vector<std::string>::iterator itr=mishrc.begin();itr!=mishrc.end();itr++){
            if((*itr).find("terminal=")==0)terminal=(*itr).erase(0,9);
        }
    }
}

#endif // MISHRC_H
