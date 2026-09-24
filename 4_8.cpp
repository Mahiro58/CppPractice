#include <iostream>
#include <vector>

int main()
{
    std::vector<int> values;
    int n = 0;
    int sum = 0;

    std::cout<<"Ile liczb chcesz zsumowac?: ";
    std::cin>>n;
    std::cout<<"Podaj liczbe: \n";
    for(int liczba; std::cin>>liczba;)
    {
        values.push_back(liczba);
        std::cout<<"Dodano "<<liczba<<std::endl;
        std::cout<<"Podaj liczbe: ";
    }
    if(values.size() < n)
    {
        std::cout<<"Nie ma tyle dodanych liczb.\n";
        for(int value : values)
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