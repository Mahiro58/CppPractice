#include <iostream>

int main(){
    double val1 = 0;
    double val2 = 0;
    double result = 0;
    char type;

    std::cout<<"First value: ";
    std::cin>>val1;
    std::cout<<"Second value: ";
    std::cin>>val2;
    std::cout<<"Mathematical operation (+ - * /): ";
    std::cin>>type;

    switch (type)
    {
    case '+':
        result = val1 + val2;
        std::cout<<"Sum of "<<val1<<" and "<<val2<<" is equal "<<result;
        break;

    case '-':
        result = val1 - val2;
        std::cout<<"Substraction of "<<val1<<" and "<<val2<<" is equal "<<result;
        break;

    case '*':
        result = val1 * val2;
        std::cout<<"Multiply of "<<val1<<" and "<<val2<<" is equal "<<result;
        break;

    case '/':
        result = val1 / val2;
        std::cout<<"Division of "<<val2<<" and "<< val2<<" is equal "<<result;
        break;
    
    default:
        std::cout<<"Wrong operator.";
        break;
    }

    return 0;
}