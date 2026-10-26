#include <iostream>
#include <vector>

using std::cout;

void print(const std::vector<int>& stack)
{
    cout << "\t (Stack: ";
    
    for(const auto& s : stack)
       cout << s << " ";
       
    cout << ") \n";
}

int main()
{
    std::vector<int> stack{};
    
    cout << "\t (Stack: empty) \n",
    
    stack.push_back(1);
    cout <<"Push 1";
    print(stack);
    
    stack.push_back(2);
    cout << "Push 2";
    print(stack);
    
    stack.push_back(3);
    cout << "Push 4";
    print(stack);
    
    stack.pop_back();
    cout << "Pop";
    print(stack);
    
    stack.push_back(4);
    cout << "Push 3";
    print(stack);
    
    stack.pop_back();
    cout << "Pop";
    print(stack);
    
    stack.pop_back();
    cout << "Pop";
    print(stack);
    
    stack.pop_back();
    cout << "Pop";
    
    std::cout << "\t (Stack: empty)";
    
    return 0;
}
