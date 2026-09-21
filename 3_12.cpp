#include <iostream>
#include <vector>

int main(){
    std::vector<int> primes;
    
    std::cout<<"Podaj liczbe: ";
    for(int liczba; std::cin>>liczba;){
        if(liczba == 2 || liczba == 3){
            std::cout<<"Dodano liczbe "<<liczba<< " do zbioru liczb pierwszych.'n";
            primes.push_back(liczba);
        }
        else if(liczba % 2 != 0 && liczba % 3 != 0){
            std::cout<<"Dodano liczbe "<<liczba<< " do zbioru liczb pierwszych.'n";
            primes.push_back(liczba);
        }
        else{
            std::cout<<"Liczba nie jest liczba pierwsza.\n";
        }
        std::cout<<"Podaj nastepna liczbe: ";
    }
    for (int prime : primes){
        std::cout<<prime<<" ";
    }


    return 0;
}