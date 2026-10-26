#include <array>
#include <iostream>

 enum Colors
    {
         red,
         green,
         blue,
         max_colors
    };


int main()
{
    constexpr std::array<char, 5> arr{'h', 'e', 'l', 'l', 'o'};
    std::cout << arr[1] << "\n";
    
   /* 
    std::array<int, 0> arr2{}; //zero lenghth array, or empty array.
    arr.empty(); // is true.
    std::cout << arr2[index]; //triggers undefined behaviour.
   */
   
   // std::array<int , 4> a{1,2,3,4,5};  compiler error : too many initializers
   
   std::array<int, 5> a; //default initialized
   std::array<int , 5> c{}; // value initialized elements.
   
   std::array<int , 4> b{1, 2};
   std::cout << b[2] << " " << b[3];
   
   //lenghth of a srd::array  must be a constant expression.
   
   std::array<int, max_colors> c{}; //using an enumerator. it is a constant expression.
   
   //Note that non-const variables and runtime constants cannot be used for the length:

 //Best practice : Use class template argument deduction (CTAD) to have the compiler deduce the type and length of a std::array from its initializers.
   
   
    return 0;
}
