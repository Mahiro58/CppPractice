#include <iostream>

// Program do zmiany kelwinow na celsjusze i odwrotnie.

double ctok(double c){
    if(c < -273.15)
    {
        throw std::runtime_error("Value below absolute zero.");
    }
    
    double k = c + 273.15;
    return k;
}

double ktoc(double k){
    if(k < 0)
    {
        throw std::runtime_error("Value belowe absolute zero.");
    }
    double c = k - 273.15;
    return c;
}

int main(){
    double c = 0;
    double k = 0;
    double ctokResult = 0;
    double ktocResult = 0;
    std::cout<<"Podaj stopnie w c: ";
    std::cin>> c;
    std::cout<<"Podaj stopnie w k: ";
    std::cin>> k;
    try
    {
        ktocResult = ctok(k);
        ctokResult = ctok(c);
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << e.what() << '\n';
    }
    ktocResult = ktoc(k);
    ctokResult = ctok(c);
    std::cout<<"k to c: "<<ktocResult<<std::endl;
    std::cout<<"c to k: "<<ctokResult<<std::endl;

    return 0;
}