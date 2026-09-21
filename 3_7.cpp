#include <iostream>
#include <vector>

int main(){
    std::vector<std::string> vec;
    for (std::string addToVector; std::cin>>addToVector;){
        vec.push_back(addToVector);
        std::cout<<"Dodano "<<addToVector<<" do vectora.\n";
    }

    return 0;
}