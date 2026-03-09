#include <iostream>
#include <string>


class Pie {
public:
	std::string describer;
	std::string tastiness;

	Pie(std::string desc, std::string taste) {
		describer = desc;
		tastiness = taste;
	}
	virtual std::string description() = 0;

	virtual void summary() {
		std::cout << describer << " is " << tastiness << "\n";
	}
};


class ApplePie : public Pie {
public:
	ApplePie(std::string desc = "ApplePie", std::string taste = "Sweet") : Pie(desc, taste) {};
	std::string description() {
		return describer;
	}
};


class RasberryPie : public Pie {
public:
	RasberryPie(std::string desc = "RasberryPie", std::string taste = "Tart") : Pie(desc, taste) {};
	std::string description() {
		return describer;
	}
};


class ApricotPie : public Pie {
public:
	ApricotPie(std::string desc = "ApricotPie", std::string taste = "Fruity") : Pie(desc, taste) {};
	
	std::string description() {
		return describer;
	}
};


int main() {
	std::cout << "Welcome To Mina's Bakery,\n for Apple Pie, type 1, \n for Rasberry Pie, type 2, \n for Apricot Pie, type 3\n";
	ApplePie applePie;
	applePie.summary();

	RasberryPie rasberryPie;
	rasberryPie.summary();

	ApricotPie apricotPie;
	apricotPie.summary();

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

	return 0;
}