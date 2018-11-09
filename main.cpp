#include"main.h"
#include"command.h"
#include"mishrc.h"

int main(){
    std::vector<std::string> Answer;
    std::string Ans;
    get_mishrc();
    std::cout<<"   /  |/  (_)___ |__  /_  __/___  ____  / /____\n";
    std::cout<<"  / /|_/ / / __ \\ /_ < / / / __ \\/ __ \\/ / ___/\n";
    std::cout<<" / /  / / / / / /__/ // / / /_/ / /_/ / (__  ) \n";
    std::cout<<"/_/  /_/_/_/ /_/____//_/  \\____/\\____/_/____/\n";
    std::cout<<"Hello "<<username<<".\n";
    std::cout<<"\nMin3Tools is running!\nIf you don't know how to use, please type 'help' or '-h'.\n\n";
    while(1){
        Answer.clear();
        std::cout<<"TypeAndGo!->";
        std::getline(std::cin,Ans);
        std::ifstream ifs("");
        if(Ans!=""){
            Answer=SplitStr(Ans,' ');
            if(command(Answer)==false)std::cout<<"It command  have an error :(\n";
        }
    }
}
