#include <iostream>
#include <array>

struct Item
{
  std::string_view name{};
  int gold{};
  
};

template <typename T, std::size_t N>
void print(const std::array<T,N>& arr)
{
    for(const auto& t : arr)
       std::cout << "A " << t.name << " costs " << t.gold << " gold. \n";
       
}

int main()
{
    constexpr std::array items{
        Item{"sword",5},
        Item{"dagger",3}, 
        Item{"club",2}, 
        Item{"spear", 7}
    };
    
    print(items);
}
