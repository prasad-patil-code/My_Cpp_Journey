#include <iostream>

using std::cout;
using std::cin;

int input()
{
	cout << "Enter the positive integer : ";
	int i{};
	cin >> i;

	return i;
}

void logic(int i)
{

	int j{};
	int k{1};
	do
	{
		if(i % 2 == 0)
		{
			cout << i << " is Even ----> ";
			j = i / 2;

		}

		else
		{
			cout << i << " is odd ----> ";
			j = 3*i + 1;
		}

		i = j;

		std::cout << i << " (Step " << k << ")";



		cout << "\n";

		++k;

	}
	while( j != 1);

	return;
}


int main()
{
	int i{input()};

	logic(i);


	return 0;
}
