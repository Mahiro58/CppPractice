#include <iostream>

int main(){
    int val1 = 0;
    int val2 = 0;
    std::cout<<"Podaj dwie liczby calkowie: ";
    while(std::cin>>val1 && std::cin>>val2){
        std::cout<<val1<<","<<val2;
    }

    return 0;
}