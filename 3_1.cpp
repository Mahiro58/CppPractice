#include <iostream>

int main(){
    std::string chain01;
    int char_to_int = 0;
    std::cout<<"Podaj lancuch znakow: \n";
    std::cin>>chain01;
    for(char x : chain01){
        char_to_int = x;
        std::cout<<x<<" "<<char_to_int<<std::endl;
    }

    return 0;
}