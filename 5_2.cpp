#include <iostream>
#include <vector>

class Token
{
    public:
        char kind;
        double value;
        Token(char k) :kind{k}, value{0.0} {}
        Token(char k, double v) :kind{k}, value{v} {}
};
Token get_token();
std::vector<Token> tok;

double expression()
{
    double left = term();
    Token t = get_token();
    while(true) 
    {
        switch (t.kind)
        {
        case '+':
            left += term();
            t = get_token();
            break;

        case '-':
            left -= term();
            t = get_token();
            break;
        
        default:
            return left;
        }
    }
}

double term()
{
    double left = primary();
    Token t = get_token();
    while(true)
    {
        switch (t.kind)
        {
        case '*':
            left *= primary();
            t = get_token();
            break;

        case '/':
        {
            double d = primary();
            if(d == 0) std::cerr<<"Dzielnie przez zero!\n";
            left /= primary();
            t = get_token();
        }
        default:
            return left;
        }
    }
}

double primary()
{
    Token t = get_token();
    switch (t.kind)
    {
    case '()':
    {
        double d = expression();
        t = get_token();
        if(t.kind != ')') std::cerr<<"Oczekiwano ')'\n";
        return d;
    }
    case '8':
        return t.value;
    default:
        std::cerr<<"Oczekiwano czynnika.\n";
    }
}

int main()
{
    try {
        while(std::cin)
        {
            std::cout<<"= "<<expression()<<std::endl;
        }
    }
    catch (std::exception& e) {
        std::cerr<<e.what()<<std::endl;
        return 1; 
    }
    catch (...) {
        std::cerr<<"Wyjatek \n";
        return 2;
    }

    return 0;
}