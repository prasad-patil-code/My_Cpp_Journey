#include <iomanip>
#include <iostream>

int Saplings()
{
	std::cout << "Enter the Number of Saplings : ";
	int sapNum{};
	std::cin >> sapNum;

	return sapNum;
}

double weightPerSap()
{
	std::cout << "Enter the average  weight per sapling : ";
	double w{};
	std::cin >> w;

	return w;
}

int operations(int sap, double wgt)
{
	std::cout << std::setprecision(13);

	double z{sap*wgt};

	std::cout << "Precise Total Weight = " << z << '\n';

	std::cout << "Wholesale Truncated Total Weight = " << static_cast<int>(z) << '\n';

	return static_cast<int>(z);
}

void grading(int g)
{
	if (g >= 24000)
		std::cout << "Grade status : A" << '\n';

	else
		std::cout << "Grade status : B" << '\n';

	return;
}

void passing(int g)
{
	std::cout << std::boolalpha;

	bool isConfirm{g >= 24000};

	if (isConfirm)
		std::cout << "Status : Verified and Confirmed. " << '\n';

	else
		std::cout << "Status : NVC";

	return;
}


int main()
{
	int sap{Saplings()};
	double wgt{weightPerSap()};

	int g{operations(sap, wgt)};

	grading(g);

	passing(g);


	return 0;
}
