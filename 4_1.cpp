#include <iostream>

double ctok(double c){
    if(c < -273.15)
    {
        throw std::runtime_error("Value below absolute zero.");
    }
    
    double k = c + 273.15;
    return k;
}

int main(){
    double c = 0;
    std::cout<<"Podaj stopnie w c: ";
    std::cin>> c;
    try
    {
        double k = ctok(c);
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }
    double k = ctok(c);
    std::cout<<k<<std::endl;

    return 0;
}