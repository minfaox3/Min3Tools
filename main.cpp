#include"main.h"
#include"command.h"
#include"mishrc.h"
#include"n_function.h"

int main(){
    std::vector<std::string> Answer;
    std::string Ans,bc;
    get_mishrc();
    std::cout<<"   /  |/  (_)___ |__  /_  __/___  ____  / /____\n";
    std::cout<<"  / /|_/ / / __ \\ /_ < / / / __ \\/ __ \\/ / ___/\n";
    std::cout<<" / /  / / / / / /__/ // / / /_/ / /_/ / (__  ) \n";
    std::cout<<"/_/  /_/_/_/ /_/____//_/  \\____/\\____/_/____/\n";
    std::cout<<"Hello "<<username<<".\n";
    std::cout<<"\nmish is running!\nIf you don't know how to use, please type 'help' or '-h'.\n\n";
    while(1){
        title=username+"::"+currentwdir;
        if(currentwdir==userdir)title=username+"::~";
        std::cout << "\033]0;" <<title<< "\007";
        Answer.clear();
        if(currentwdir==userdir)std::cout<<username<<"::~->";
        else if(currentwdir=="/")std::cout<<username<<"::/->";
        else if(currentwdir.find("/home/minfaox3/")==0){
            bc=currentwdir;
            bc.erase(0,15);
            std::cout<<username<<"::~/"<<bc<<"\b->";
        }
        else std::cout<<username<<"::"<<currentwdir<<"\b->";
        std::getline(std::cin,Ans);
        std::ifstream ifs("");
        if(Ans!=""){
            Answer=SplitStr(Ans,' ');
            if(command(Answer)==false)std::cout<<"It command  have an error :(\n";
        }
    }
}
