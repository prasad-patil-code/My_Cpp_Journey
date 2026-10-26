#include <iostream>
#include <array>

int main()
{
    constexpr std::array arr{9.0, 7.2, 5.4, 3.6, 1.8};
    std::cout << "length :  " << arr.size() << std::size(arr) << "\n"; // both return length as type size_type (alias for std::size_t, which is unsigned type)
    std::cout << std::ssize(arr) << "\n"; //returns lenghth as a large integral type (signed type).
    
    std::array arr2{9,7,5,3,1};
    const int length{std::size(arr)}; 
    
    std::cout << length;
    
    constexpr std::array prime{2,3,5,7,11};
    
    std::cout << std::get<3>(prime); //prints the value of element with ondex 3.
   // std::cout << std::get<9>(prime); //invalid index(compiler error).
    
    return 0;
}
