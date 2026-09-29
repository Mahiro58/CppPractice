#include <iostream>

int main()
{
    std::cout << "Sprawdzenie" << std::endl;
    std::cout << "Wartosc makra: " << __cplusplus << std::endl;

    std::cout << "Aktualny standard: ";
    if (__cplusplus == 202302L || __cplusplus == 202104L) {
        std::cout << "C++23" << std::endl;
    }
    else if (__cplusplus == 202002L) {
        std::cout << "C++20" << std::endl;
    }
    else if (__cplusplus == 201703L) {
        std::cout << "C++17" << std::endl;
    } 
    else if (__cplusplus == 201402L) {
        std::cout << "C++14" << std::endl;
    }
    else if (__cplusplus == 201103L) {
        std::cout << "C++11" << std::endl;
    }
    else {
        std::cout << "Cos starego" << std::endl;
    }
    return 0;
}