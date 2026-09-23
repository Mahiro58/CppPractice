#include <iostream>

double ftoc(double f)
{
    double c = (f - 32) / (1.8);
    return c;
}

double ctof(double c)
{
    double f = (c*(1.8)) + 32;
    return f;
}

int main()
{
    double c = 0;
    double f = 0;
    double ftocResult = 0;
    double ctofResult = 0;

    std::cout<<"Podaj c: ";
    std::cin>>c;
    std::cout<<"Podaj f: ";
    std::cin>>f;

    ftocResult = ftoc(f);
    ctofResult = ctof(c);

    std::cout<<"F to C "<<ftocResult<<std::endl;
    std::cout<<"C to F "<<ctofResult<<std::endl;

    return 0;
}