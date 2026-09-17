#include <iostream>

int main() {
    int val1;
    int val2;
    int val3;
    std::cout<<"Type 3 numbers: \n";
    std::cout<<"First number: ";
    std::cin>>val1;
    std::cout<<"Secound number: ";
    std::cin>>val2;
    std::cout<<"Third number: ";
    std::cin>>val3;
    if(val1 > val2 && val1 > val3){
        if(val2 < val3){
            std::cout<<val2<<","<<val3<<","<<val1;
        }
        else{
            std::cout<<val3<<","<<val2<<","<<val1;
        }
    }
    else if(val1 > val2 && val1 < val3){
        std::cout<<val2<<","<<val1<<","<<val3;
    }
    else if(val1 < val2 && val1 < val3){
        if(val2 < val3){
            std::cout<<val1<<","<<val2<<","<<val3;
        }
        else{
            std::cout<<val1<<","<<val3<<","<<val2;
        }
    }
    else{
        std::cout<<"Error.";
    }
    return 0;
}