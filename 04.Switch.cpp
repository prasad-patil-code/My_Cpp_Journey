#include <iostream>

constexpr int error{0};


int input1()
{
    std::cout << "Enter an Integer : ";
    int a{};
    std::cin >> a;
    
    
    return a;
}

inline char input2()
{
    std::cout << "Enter operation +,-,/,* or % :";
    char a{};
    std::cin >> a;
    
    return a;
}

int calculate(int x, int y, char o)
{
    switch(o)
    {
        case '+':
          return x + y;
          
        case '-':
          return x - y;
          
        case '/':
          return x / y;
        
        case '*':
          return x * y;
          
        case '%':
          return x % y;
          
        default:
          return ::error;
    }
}

int main()
{
    int x{input1()};
    int y{input1()};
    char o{input2()};
    
    int output{calculate(x, y, o)};
    
    if (output == ::error)
      std::cout << "Error!!!!!!";
      
    else
    std::cout << "Solution : " << x << o << y << " = " << calculate(x, y, o);
    
    
    return 0;
    
}
