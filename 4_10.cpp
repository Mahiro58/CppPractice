#include <iostream>
#include <vector>

int main()
{
    std::vector<double> values;
    std::vector<double> minus;
    int n = 0;
    double sum = 0;
    double result = 0;

    std::cout<<"Ile liczb chcesz zsumowac?: ";
    std::cin>>n;
    std::cout<<"Podaj liczbe: \n";
    for(double liczba; std::cin>>liczba;)
    {
        values.push_back(liczba);
        std::cout<<"Dodano "<<liczba<<std::endl;
        std::cout<<"Podaj liczbe: ";
    }

    for(int i = 0; i < values.size() - 1; i++)
    {
        result = values[i] - values[i + 1];
        minus.push_back(result);
    }
    std::cout<<"Roznice sasiednich liczb wynosza: ";
    for(int value : minus)
    {
        std::cout<<value<<", ";
    }

    if(values.size() < n)
    {
        std::cout<<"Nie ma tyle dodanych liczb.\n";
        for(double value : values)
        {
            sum += value;
        }
        std::cout<<"Suma "<<values.size()<<" dostepnych liczb wynosi: "<<sum;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            sum += values[i];
        }
        std::cout<<"Suma "<<n<<" liczb wynosi: "<<sum;
    }

    return 0;
}