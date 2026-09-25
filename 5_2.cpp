#include <iostream>
#include <vector>

class Token{
    public:
        char kind;
        double value;
        Token(char k) :kind{k}, value{0.0} {}
        Token(char k, double v) :kind{k}, value{v} {}
};
Token get_token();
std::vector<Token> tok;

int main()
{
    std::cout<<"Wpisz wyrazenie (+ - * /): ";
    int lval = 0;
    int rval = 0;
    int res = 0;
    std::cin>>lval;
    if(!std::cin) std::cerr<<"Brak poczatkowego argumentu.\n";

    for(char op; std::cin>>op;)
    {
        if (op != 'x') std::cin>>rval;
        if (!std::cin) std::cerr<<"Brak drugiego wyrazenia argumentu.\n";
        switch (op)
        {
        case '+':
            lval += rval;
            break;
        
        case '-':
            lval -= rval;
            break;

        case '*':
            lval *= rval;
            break;

        case '/':
            lval /= rval;
            break;
            
        default:
            std::cout<<"Wynik: "<<lval<<std::endl;            
            break;
        }
    }
    return 0;
}