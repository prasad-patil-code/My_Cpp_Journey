#include <iostream>
#include <vector>

template <typename T>
void sort(std::vector<T>& set)
{
  for(std::size_t num{1}; num <= set.size(); ++num)
  {
     for(std::size_t index{0}; index < set.size() - 1; ++index)
     {
        int p{set[index+1]};

        if(set[index] > set[index+1])
        {
            set[index+1] = set[index];
            set[index] = p;
        }
     }
  }
}

template <typename T>
void print(std::vector<T>& set) 
{
   for(std::size_t index{0}; index < set.size(); ++index)
     {
         std::cout << set[index] << " ";
     }
     
     std::cout << "\n";
}


int main()
{
    std::vector<int> set{2,7,9,16,3,5,1,12,11};

    sort(set);
    
    print(set);
    
    return 0;
}
