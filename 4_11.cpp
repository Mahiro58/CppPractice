#include <iostream>
#include <vector>

int main()
{
    std::vector<int> fibonacci;
    int n = 0;
    int value1 = 1;
    int value2 = 1;
    int sum = 0;
    fibonacci.push_back(value1);
    fibonacci.push_back(value2);
    std::cout<<"Podaj ilosc liczb Fibonacciego: ";
    std::cin>>n;

    for (int i = 0; i < n; i++)
    {
        sum = value1 + value2;
        fibonacci.push_back(sum);
        value1 = value2;
        value2 = sum;
    }

    for(int value : fibonacci)
    {
        std::cout<<value<<" ";
    }


    return 0;
}