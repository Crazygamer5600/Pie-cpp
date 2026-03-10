#include <iostream>
#include "RasberryPie.h"
#include "ApplePie.h"
#include "ApricotPie.h"

int main() {
	std::cout << "Welcome To Mina's Bakery,\n for Apple Pie, type 1, \n for Rasberry Pie, type 2, \n for Apricot Pie, type 3\n";
	ApplePie applePie;
	applePie.description();

	RasberryPie rasberryPie;
	rasberryPie.description();

	ApricotPie apricotPie;
	apricotPie.description();

	Pie* piePtr = nullptr;
	std::string inpt;
	std::cout << ">>";
	std::cin >> inpt;


	while (inpt != "1" && inpt != "2" && inpt != "3") {
		std::cout << "Incorrect Value! ,\n for Apple Pie, type 1, \n for Rasberry Pie, type 2, \n for Apricot Pie, type 3\n>>";
		std::cin >> inpt;
	}

	switch (stoi(inpt)) {
	case 1:
		piePtr = new ApplePie();
		break;
	case 2:
		piePtr = new RasberryPie();
		break;
	case 3:
		piePtr = new ApricotPie();
		break;
	}
	std::cout << "Successfully ordered: " << piePtr->description();
	delete piePtr;

	return 0;
}