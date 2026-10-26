#include <iostream>
#include <array>

template <typename T, std::size_t N>
void printArray(const std::array<T, N>& arr)
{
    std::cout << " The array ( ";
    
    for(std::size_t index{0}; index < N; ++index)
       std::cout << arr[index] << ", ";
    
    std::cout << " ) has length " << N;
}

int main()
{
    constexpr std::array arr1 { 1, 4, 9, 16 };
    printArray(arr1);
    
    std::cout << "\n";
    
    constexpr std::array arr2 { 'h', 'e', 'l', 'l', 'o' };
    printArray(arr2);
   
    return 0;
}
