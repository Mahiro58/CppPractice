#include <iostream>

int main(){
    int kwadrat = 1;
    long ryz = 1;
    long sum = 1;
    for (int i = 0; i < 64; i++){
        std::cout<<"Za kwadrat nr."<<kwadrat<<" jest "<<ryz<<std::endl;
        std::cout<<"Suma ryzu: "<<sum<<std::endl;
        kwadrat++;
        ryz *= 2;
        sum += ryz;
    }

    return 0;
}