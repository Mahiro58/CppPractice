#include <iostream>
#include <vector>

int main(){
    std::vector<double> distances;
    double sum = 0;
    double min = 0;
    double max = 0;
    double average = 0;
    std::cout<<"Podaj odleglosc: ";
    for(double number; std::cin>>number;){
        distances.push_back(number);
        std::cout<<"Podaj odleglosc: ";
    }
    min = distances[0];
    max = distances[0];
    for(double number : distances){
        sum += number;
        if(number > max){
            max = number;
        }
        if(number < min){
            min = number;
        }
    }
    average = sum / distances.size();
    std::cout<<"Pelny dystans to: "<<sum<<std::endl;
    std::cout<<"Najmniejsza odleglosc miedzy miastami to: "<<min<<std::endl;
    std::cout<<"Najwieksza odlegleosc miedzy miastami to: "<<max<<std::endl;
    std::cout<<"Stednia odleglosc miedzy miastami to: "<<average<<std::endl;


    return 0;
}