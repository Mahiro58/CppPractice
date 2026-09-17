#include <iostream>

int main(){
    int g1;
    int g2;
    int g5;
    int g10;
    int g20;
    int g50;
    int z1;
    int result;
    double convert;
    std::cout<<"Podaj ile masz jednogroszowek: ";
    std::cin>>g1;
    std::cout<<"Podaj ile masz dwugroszowek: ";
    std::cin>>g2;
    std::cout<<"Podaj ile masz pieciogroszowek: ";
    std::cin>>g5;
    std::cout<<"Podaje ile masz dziesieciogroszowek: ";
    std::cin>>g10;
    std::cout<<"Podaj ile masz dwudziestogroszowek: ";
    std::cin>>g20;
    std::cout<<"Podaj ile masz piedziesieciogroszowek: ";
    std::cin>>g50;
    std::cout<<"Podaj ile masz zlotowek: ";
    std::cin>>z1;

    if (g1 == 0){
        std::cout<<"Masz "<<g1<<" groszy.\n";
    }
    else if (g1 == 1){
        std::cout<<"Masz "<<g1<<" grosz.\n";
    }
    else if (g1 > 1 && g1 < 5){
        std::cout<<"Masz "<<g1<<" grosze.\n";
    }
    else{
        std::cout<<"Masz "<<g1<<" groszy.\n";
    }

    if (g2 == 0){
        std::cout<<"Masz "<<g2<<" dwugroszowek.\n";
    }
    else if (g2 == 1){
        std::cout<<"Masz "<<g2<<" dwugroszowke.\n";
    }
    else if (g2 > 1 && g2 < 5){
        std::cout<<"Masz "<<g2<<" dwugroszowki.\n";
    }
    else{
        std::cout<<"Masz "<<g2<<" dwugroszowek.\n";
    }

    if (g5 == 0){
        std::cout<<"Masz "<<g5<<" pieciogroszowek.\n";
    }
    else if (g5 == 1){
        std::cout<<"Masz "<<g5<<" pieciogroszowke.\n";
    }
    else if (g5 > 1 && g5 < 5){
        std::cout<<"Masz "<<g5<<" pieciogroszowki.\n";
    }
    else{
        std::cout<<"Masz "<<g5<<" pieciogroszowek.\n";
    }

    if (g10 == 0){
        std::cout<<"Masz "<<g10<<" dziesieciogroszowek.\n";
    }
    else if (g10 == 1){
        std::cout<<"Masz "<<g10<<" dziesieciogroszowke.\n";
    }
    else if (g10 > 1 && g10 < 5){
        std::cout<<"Masz "<<g10<<" dziesieciogroszowki.\n";
    }
    else{
        std::cout<<"Masz "<<g10<<" dziesieciogroszowek.\n";
    }

    if (g20 == 0){
        std::cout<<"Masz "<<g20<<" dwudziestogroszowek.\n";
    }
    else if (g20 == 1){
        std::cout<<"Masz "<<g20<<" dwudziestogroszowke.\n";
    }
    else if (g20 > 1 && g20 < 5){
        std::cout<<"Masz "<<g20<<" dwudziestogroszowki.\n";
    }
    else{
        std::cout<<"Masz "<<g20<<" dwudziestogroszowek.\n";
    }

    if (g50 == 0){
        std::cout<<"Masz "<<g50<<" piedziesieciogroszowek.\n";
    }
    else if (g50 == 1){
        std::cout<<"Masz "<<g50<<" piedziesieciogroszowke.\n";
    }
    else if (g50 > 1 && g50 < 5){
        std::cout<<"Masz "<<g50<<" piedziesieciogroszowki.\n";
    }
    else{
        std::cout<<"Masz "<<g50<<" piedziesieciogroszowek.\n";
    }

    if (z1 == 0){
        std::cout<<"Masz "<<z1<<" zlotowek.\n";
    }
    else if (z1 == 1){
        std::cout<<"Masz "<<z1<<" zlotowke.\n";
    }
    else if (z1 > 1 && z1 < 5){
        std::cout<<"Masz "<<z1<<" zlotowki.\n";
    }
    else{
        std::cout<<"Masz "<<z1<<" zlotowek.\n";
    }
        
    result = g1 + g2 + g5 + g10 + g20 + g50 + (z1*100);
    convert = result * 0.01;
    std::cout<<"Wartosc Twoich monet to: "<<result<<" groszy ("<<convert<<" zlotego).\n";

    return 0;
}