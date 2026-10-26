#include <iostream>
#include <vector>


template <typename T>
void printnum(const std::vector<T>& num)
{
    std::size_t lenghth{num.size()};
    
    for(std::size_t index{0}; index < lenghth; ++index)
        std::cout << num[index] << " ";

  std::cout << "\n";
        
}

template <typename T>
int findindex(const std::vector<T>& num, std::size_t value) 
{ 
   for(std::size_t index{0}; index < num.size(); ++index) 
   {
    if(num[index] == value)
           return static_cast<int>(index);
   }
   
  return -1;

}

std::size_t input()
{
   std::size_t value{};

   do
   {
    std::cout << "Enter the value between 1 and 9 : ";
    std::cin >> value;

    if (!std::cin)
            std::cin.clear(); // reset any error flags

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any extra characters in the input buffer (regardless of whether we had an error or not)

   }while(value < 1 || value > 9);

    return value;
}


int main()
{
    std::vector num{4, 6, 7, 3, 8, 2, 1, 9};

    std::size_t value{input()};

    printnum(num);

    int index{findindex(num, value)};
   
   if(index != -1 )
     std::cout <<  "The number " << value << " has index " << index;
   else
     std::cout <<  "The number " << value << " was not found";

    return 0;
}
