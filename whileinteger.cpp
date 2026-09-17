#include <iostream>

int main(){
    double val1;
    double val2;
    double min;
    double max;
    bool first_try_min = true;
    std::cout<<"Podaj liczbe: ";
    while(std::cin>>val1){
        if (val1 > max){
            max = val1;
            std::cout<<"To byla najwieksza dotychczasowa liczba.\n";
        }
        else if(val1 < min){
            min = val1;
            std::cout<<"To byla najmniejsza dotychczasowa liczba.\n";
        }

        if(first_try_min){
            min = val1;
            std::cout<<"To byla najmniejsza dotychczas liczba.\n";
            first_try_min = false;
        }


        /*std::cout<<"Podane liczby to: "<<val1<<" i "<<val2<<'\n';
        if(val1>val2){
            std::cout<<"Mniejsza liczba to "<<val2<<'\n';
            std::cout<<"Wieksza liczba to "<<val1<<'\n';
            if (std::abs(val1-val2)<0.01){
                std::cout<<"Liczby sa prawie rowne.\n";
            }
        }
        else if(val1<val2){
            std::cout<<"Mniejsza liczba to "<<val1<<'\n';
            std::cout<<"Wieksza liczba to "<<val2<<'\n';
            if (std::abs(val2-val1)<0.01){
                std::cout<<"Liczby sa prawie rowne.\n";
            }
        }
        else if(val1==val2){
            std::cout<<"Liczby sa rowne.\n";
        }
        else {
            std::cout<<"Error";
        }*/
    }

    return 0;
}