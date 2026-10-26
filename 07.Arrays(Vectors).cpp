#include <vector>
#include <iostream>

int main()
{
    std::vector<int> empty{}; //vector containing 0 int elements.
    
    const std::vector<int> primes{2, 3, 5, 7, 9, 11}; // prime and its elements cannot be modified
    
    
    /* Key insight

        Per Howard Hinnant’s comment here, the standard library containers were not designed to have const elements.
        A containers const-ness comes from const-ing the container itself, not the elements. */  
    
    
    std::cout << "The first prime number is " << primes[0] << '\n';
    std::cout << "The second prime number is " << primes[1] << '\n';
    
    int sum{primes[0] + primes[3]};
    std::cout << "The sum of first and fourth prime is " << sum << '\n';
    
    //std::cout << primes[12]; this will cause undefined behaviour because operator[] does not do any bound checking between 0 to N-1;
    
    std::cout << "the size of int is " << sizeof(int) << " bytes \n";
    std::cout << &(primes[0]) << '\n';
    std::cout << &(primes[1]) << '\n';
    std::cout << &(primes[2]) << '\n';
    
    std::vector<int> data(10);
    std::cout << data[9] << "\n";
    
    std::cout << "lenghth : " << primes.size(); //returns lenghth as type size_type(alias for std::size_t)
    std::cout << " lenghth : " << std::size(primes) << " "; //returns lenghth as type size_type(alias for std::size_t) 
    
    int lenghth{static_cast<int>(primes.size())};
    std::cout << lenghth;
    
    std::vector<char> vowels{'a' , 'e', 'i', 'o', 'u'}; //this can also be left without template argumnets.
    
    
    return 0;
}

