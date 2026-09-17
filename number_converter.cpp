#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    double val1 = 0;
    std::string number_type;
    char option;
    double min = 0;
    double max = 0;
    bool first_try_min = true;
    std::vector<double> vec;
    double cm = 0;
    std::cout<<"Podaj liczbe: ";
    while(std::cin>>val1>>number_type){
        /*if(first_try_min){
            min = val1;
            max = val1;
            std::cout<<"To byla najmniejsza dotychczas liczba.\n";
            std::cout<<"To byla najwieksza dotychczasowa liczba.\n";
            first_try_min = false;
        }
        if (val1 > max){
            max = val1;
            std::cout<<"To byla najwieksza dotychczasowa liczba.\n";
        }
        else if(val1 < min){
            min = val1;
            std::cout<<"To byla najmniejsza dotychczasowa liczba.\n";
        }*/

        option = '0';

        if(number_type == "cm"){
            option = 'c';
        }
        else if(number_type == "cal"){
            option = 'l';
        }
        else if(number_type == "st"){
            option = 's';
        }
        else if(number_type == "m"){
            option = 'm';
        }
        else{
            std::cout<<"Zla jednostka.\n";
        }

        switch (option)
        {
        case 'c':
            if(val1>100){
                cm = val1;
                val1 = val1 * 0.01;
                number_type = "m";
                vec.push_back(cm);
            }
            else{
                vec.push_back(val1);
            }
            break;

        case 'l':
            val1 = val1 * 2.54;
            number_type = "cm";
            vec.push_back(val1);
            break;

        case 's':
            val1 = val1 * 12;
            number_type = "cal";
            cm = val1 *2.54;
            vec.push_back(cm);            
            break;
        
        default:
            break;
        }

        /*std::ranges::sort(vec);
        for(double x : vec){
            std::cout<<x;
        }*/

        
    }

    return 0;
}