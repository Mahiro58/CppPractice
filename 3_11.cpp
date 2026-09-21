#include <iostream>
#include <vector>
#include <random>

int main(){
    std::vector<std::string> base = {"paper", "rock", "scisors"};
    std::string userChoice;
    bool isGameOn = true;
    std::string pcChoice;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0,2);

    while(isGameOn){
        std::cout<<"Whats your choice? (rock, paper, scisors): ";
        std::cin>>userChoice;

        pcChoice = base[dist(gen)];

        if(userChoice == "paper"){
            if(pcChoice == "paper"){
                std::cout<<"Your oponent choosed paper."<<std::endl;
                std::cout<<"Its a draw.\n";
            }
            else if(pcChoice == "rock"){
                std::cout<<"Your oponent choosed rock."<<std::endl;
                std::cout<<"You won.\n";
            }
            else if(pcChoice == "scisors"){
                std::cout<<"Your oponent choosed scisors."<<std::endl;
                std::cout<<"You lost.\n";
            }
            else{
                std::cout<<"Error.\n";
            }
        }
        else if(userChoice == "rock"){
            if(pcChoice == "paper"){
                std::cout<<"Your oponent choosed paper."<<std::endl;
                std::cout<<"You lost.\n";
            }
            else if(pcChoice =="rock"){
                std::cout<<"Your oponent choosed rock."<<std::endl;
                std::cout<<"Its a draw.\n";
            }
            else if(pcChoice == "scisors"){
                std::cout<<"Your oponent choosed scisors."<<std::endl;
                std::cout<<"You won.\n";
            }
            else{
                std::cout<<"Error.\n";
            }
        }
        else if(userChoice == "scisors"){
            if(pcChoice == "paper"){
                std::cout<<"Your oponent choosed paper."<<std::endl;
                std::cout<<"You won.\n";
            }
            else if(pcChoice == "rock"){
                std::cout<<"Your oponent choosed rock."<<std::endl;
                std::cout<<"You lost.\n";
            }
            else if(pcChoice == "scisors"){
                std::cout<<"Your oponent choosed scisors."<<std::endl;
                std::cout<<"Its a draw.\n";
            }
            else{
                std::cout<<"Error.\n";
            }
        }
        else{
            isGameOn = false;
        }

    }


    return 0;
}