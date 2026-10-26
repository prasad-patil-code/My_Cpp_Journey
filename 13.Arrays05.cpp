#include<iostream>
#include<vector>
#include<cassert>


namespace Items
{

enum Type : unsigned int
{
	health_potion,
	torches,
	arrows,
	max_types
};

}

std::string_view returnName(const Items::Type& p)
{
	switch(p)
	{
	case Items::health_potion :
		return " health potion";
	case Items::torches :
		return " torches";
	case Items::arrows :
		return " arrows";

	}
	
	return "???";
}

int main()
{
	std::vector<int> number{1, 5, 10};

	assert(number.size() == Items::max_types );

	/*int totalItems{number[Items::health_potion] + number[Items::torches] + number[Items::arrows]};

	std::cout << "You have " << totalItems << " total items";*/

	int sum{};

	for(std::size_t index{0}; index < number.size(); ++index)
	{
		std::cout << "You have " << number[index] << returnName(static_cast<Items::Type>(index)) << "\n";

		sum += number[index];
	}

	std::cout << "You have " << sum << " total items";


}

