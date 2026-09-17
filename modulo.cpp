#include <iostream>

int main(){
    int number;
    int result;
    std::cout<<"Check if a number is integer.\n";
    std::cout<<"Enter a number: ";
    std::cin>>number;
    result = number % 2;
    if(result == 0){
        std::cout<<"Number "<<number<<" is integer.";
    }
    else {
        std::cout<<"Number "<<number<<" is not integer.";
    }
    return 0;
}