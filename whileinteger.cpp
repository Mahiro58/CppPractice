#include <iostream>

int main(){
    double val1 = 0;
    double val2 = 0;
    std::cout<<"Podaj dwie liczby calkowie: ";
    while(std::cin>>val1 && std::cin>>val2){
        std::cout<<"Podane liczby to: "<<val1<<" i "<<val2<<'\n';
        if(val1>val2){
            std::cout<<"Mniejsza liczba to "<<val2<<'\n';
            std::cout<<"Wieksza liczba to "<<val1<<'\n';
        }
        else if(val1<val2){
            std::cout<<"Mniejsza liczba to "<<val1<<'\n';
            std::cout<<"Wieksza liczba to "<<val2<<'\n';
        }
        else if(val1==val2){
            std::cout<<"Liczby sa rowne.\n";
        }
        else {
            std::cout<<"Error";
        }
    }

    return 0;
}