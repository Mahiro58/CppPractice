#include <iostream>

int main() {
    std::string first_name;
    std::string friend_name;
    int age = -1;
    //std::cout << "Hello, World!" << std::endl;
    std::cout<<"To who would you like to write a postcard?: ";
    std::cin>>first_name;
    std::cout<<"Add your friend's name: ";
    std::cin>>friend_name;
    while (true) 
    {
        std::cout<<"How old is your friend?: ";
        std::cin>>age;
        if (age < 0)
        {
            std::cout<<"Your friend is not born yet!";
        }
        else if (age > 120)
        {
            std::cout<<"Your friend is probably dead.";
        }
        else
        {
            break;
        }
    }

    std::cout<<"Dear " << first_name << '\n';
    std::cout<<"How are you? Im great.\n";
    std::cout<<"Did you meet with " << friend_name << "?\n";
    std::cout<<"I heard you had a birthday and you're "<<age<<" years old\n";
    if (age == 12)
    {
        std::cout<<"Next year you will be "<< age+1<<" years old.\n";
    }
    else if (age == 17)
    {
        std::cout<<"Next year you will be able to vote.\n";
    }
    else if (age > 69)
    {
        std::cout<<"Did you retire?\n";
    }
    std::cout<<"Best regards.\n\n";
    std::cout<<"Smit Patryk\n";
    return 0;
}