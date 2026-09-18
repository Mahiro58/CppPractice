#include <iostream>

int main(){
    std::string answer;
    int max_number = 100;
    int min_number = 1;
    int ask_number = max_number / 2;
    int tries_count = 1;
    int result = max_number - min_number;
    std::cout<<"Program do zgadywania liczb od 1 do 100.\n";
    std::cout<<"Wpisz 'start' be zaczac\n";
    while (std::cin>>answer){
        if(answer == "start"){
        }
        else if(answer == "tak"){
            max_number = ask_number;
            ask_number = (min_number + max_number) / 2;
            tries_count++;
            result = max_number - min_number;
            // std::cout<<"min_number: "<<min_number<<" max_number "<<max_number<<std::endl;
            if (result == 1){
                std::cout<<"Twoja liczba to "<<ask_number<<std::endl;
                break;
            }
        }
        else if(answer == "nie"){
            min_number = ask_number;
            ask_number = (min_number + max_number) / 2;
            tries_count++;
            result = max_number - min_number;
            // std::cout<<"min_number: "<<min_number<<" max_number "<<max_number<<std::endl;
            if (result == 1){
                std::cout<<"Twoja liczba to "<<ask_number<<std::endl;
                break;
            }
        }
        else{
            std::cout<<"Error.";
        }
        std::cout<<tries_count<<". Czy ta liczba jest mniejsza od "<<ask_number<<"?\n";
    }



    return 0;
}