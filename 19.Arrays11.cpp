#include <iostream>

constexpr int arr[] {0,1,4,9};

int main()
{
	int input{};

	while(true)
	{
		bool value{false};

		std::cout << "Enter a single digit integer, or -1 to quit : ";
		std::cin >> input;

		if(input != -1)
		{
			for(const auto& a : arr)
			{
				if(input == a)
				{
					std::cout << input << " is a perfect square \n";
					value = false;
					break;
				}
				else
					value = true;
			}

			if(value)
				std::cout << input << " is not a perfect sqaure \n";
		}
		else
		{
		    std::cout << " Bye \n";
		    break;
		}
	}


	return 0;
}
