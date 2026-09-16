#include <iostream>

int main() {
    while (true)
    {
        int chooice = 0;
        int miles_to_convert = 0;
        int kms_to_convert = 0;
        float result = 0;
        std::cout<<"What do you want to convert?: \n";
        std::cout<<"1. Miles to km.\n";
        std::cout<<"2. Km to miles.\n";
        std::cout<<"3. Exit.\n";
        std::cin>>chooice;

        if(chooice == 0)
        {
            std::cout<<"No input.";
        }
        else if(chooice == 1)
        {
            std::cout<<"Miles: ";
            std::cin>>miles_to_convert;
            result = miles_to_convert * 1.609;
            std::cout<<miles_to_convert<<" miles is "<<result<<" in km.\n";
        }
        else if(chooice == 2)
        {
            std::cout<<"Kms: ";
            std::cin>>kms_to_convert;
            result = kms_to_convert * 0.621;
            std::cout<<kms_to_convert<<" kms is "<<result<<" in miles.\n";
        }
        else if (chooice == 3)
        {
            break;
        }
        else 
        {
            std::cout<<"Wrong number.";
        }
    }
    
    return 0;
}