#include <cmath>
#include <iostream>

constexpr double g{9.8};

int main()
{
	double h{};

	do
	{
		std::cout << "Enter the height of tower in meters : ";
		std::cin >> h;
	}
	while(h < 0);

	double t_sqr_max{2*h/g};

	for(double t{0}; t*t < t_sqr_max; ++t)
	{
		std::cout << "The height(in meters) from the ground at time " << t << "seconds is : " << h - g*t*t/2 << "\n";
	}

	std::cout << "The height(in meters) from the ground at time " << std::sqrt(2*h/g) << "seconds is : " << 0;


	return 0;
}
