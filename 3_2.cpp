#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> mediana;
    std::cout<<"Podaj liczbe: ";
    for(int liczba; std::cin>>liczba;){
        std::cout<<"Podaj liczbe: ";
        mediana.push_back(liczba);
    }
    std::sort(mediana.begin(), mediana.end());
    std::cout<<"Podane liczby to: ";
    for (int liczba : mediana){
        std::cout<<liczba<<" ";
    }
    if(mediana.size() % 2 == 0){
        std::cout<<"\nMediana to "<<(mediana[mediana.size()/2]+mediana[(mediana.size()/2)-1])/2;
    }
    else{
        std::cout<<"\nMediana to "<<mediana[mediana.size()/2];
    }

    return 0;
}