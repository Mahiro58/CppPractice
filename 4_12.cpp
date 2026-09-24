#include <iostream>
#include <random>
#include <vector>


int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1000,9999);

    std::vector<char> searchValue;
    std::vector<char> playerChoice;
    std::string text;
    std::string playerInput;
    bool isGameOn = true;
    int bull = 0;
    int cow = 0;

    text = std::to_string(dist(gen));

    for(char cyfra : text)
    {
        std::cout<<cyfra<<" ";
        searchValue.push_back(cyfra);
    }

    while(isGameOn)
    {
        playerChoice.clear();
        std::cout<<"Podaj swoje cztery cyfry: ";
        std::cin>>playerInput;

        for (char cyfra : playerInput)
        {
            playerChoice.push_back(cyfra);
            std::cout<<cyfra<<" ";
        }

        if(text == playerInput)
        {
            std::cout<<"Wygrales!";
            isGameOn = false;
        }

        bull = 0;
        cow = 0;
        for(int i = 0; i < 4; i++)
        {
            if(playerChoice[i] == searchValue[i])
            {
                bull++;
            }
            if(playerChoice[i] == searchValue[0] && i != 0)
            {
                cow++;
            }
            else if(playerChoice[i] == searchValue[1] && i != 1)
            {
                cow++;
            }
            else if(playerChoice[i] == searchValue[2] && i != 2)
            {
                cow++;
            }
            else if(playerChoice[i] == searchValue[3] && i != 3)
            {
                cow++;
            }
        }

        std::cout<<"Masz "<<bull<<" byki.\n";
        std::cout<<"Masz "<<cow<<" krow.\n";
    }
    
    
    

    return 0;
}