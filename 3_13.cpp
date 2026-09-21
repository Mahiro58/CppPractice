#include <iostream>
#include <vector>

int main(){
    std::vector<int> primes;
    int liczba = 2;
    
    for(int i = 0; i < 100; i++){
        if(liczba == 2 || liczba == 3 || liczba == 5 || liczba == 7){
            std::cout<<"Dodano liczbe "<<liczba<< " do zbioru liczb pierwszych.'\n";
            primes.push_back(liczba);
        }
        else if(liczba % 2 != 0 && liczba % 3 != 0 && liczba % 5 != 0 && liczba % 7 != 7){
            std::cout<<"Dodano liczbe "<<liczba<< " do zbioru liczb pierwszych.'\n";
            primes.push_back(liczba);
        }
        else{
            std::cout<<liczba<<" liczba nie jest liczba pierwsza.\n";
        }
        liczba++;
    }
    std::cout<<"Liczby pierwsze: ";
    for(int prime : primes){
        std::cout<<prime<<" ";
    }

    return 0;
}