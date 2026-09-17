#include <iostream>

int main(){
    char operation;
    double val1;
    double val2;
    double result;
    std::cout<<"Choose your operation: ";
    std::cin>>operation;
    std::cout<<"Enter first number: ";
    std::cin>>val1;
    std::cout<<"Enter secound number: ";
    std::cin>>val2;
    if(operation == '+'){
        result = val1 + val2;
        std::cout<<"Result: "<<result;
    }
    else if(operation == '-'){
        result = val1 - val2;
        std::cout<<"Result: "<<result;
    }
    else if(operation == '*'){
        result = val1 * val2;
        std::cout<<"Result "<<result;
    }
    else if(operation == '/'){
        result = val1 / val2;
        std::cout<<"Result "<<result;
    }
    else{
        std::cout<<"Error.";
    }
    return 0;
}