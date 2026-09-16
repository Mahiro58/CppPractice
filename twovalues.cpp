#include <iostream>

int main() {
    int val1 = 0;
    int val2 = 0;
    std::cout<<"First number: \n";
    std::cin>>val1;
    std::cout<<"Secound number: \n";
    std::cin>>val2;
    double result;
    if(val1 > val2){
        std::cout<<"Number "<<val1<<" is bigger.\n";
        std::cout<<"Result of substract between two numbers is "<<val1 - val2<<'\n';
        result = val1 / val2;
        std::cout<<"The proportion between two numbers is "<<result<<'\n';
    }
    else if(val1 < val2){
        std::cout<<"Number "<<val2<<" is bigger.\n";
        std::cout<<"Result of substract between two numbers is "<<val2 - val1<<'\n';
        result = val2 / val1;
        std::cout<<"The proportion between two numbers is "<<result<<'\n';
    }
    else {
        std::cout<<"Numbers are equal.\n";
        std::cout<<"Result of substract between two numbers is "<<val1 - val2<<'\n';
        std::cout<<"The proportion between two numbers is "<<val1 / val2<<'\n';
    }

    std::cout<<"Sum of two numbers is "<<val1 + val2<<'\n';
    std::cout<<"Result of multiplication between two numbers is "<<val1 * val2<<'\n';

    return 0;
}