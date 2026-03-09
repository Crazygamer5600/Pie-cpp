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
	virtual std::string description() = 0 {
		return describer;
	}
	virtual void summary() {
		std::cout << describer << " " << tastiness << "\n";
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
	ApplePie applePie;
	std::cout<<applePie.description() <<"\n";
	applePie.summary();

	RasberryPie rasberryPie;
	std::cout << rasberryPie.description() << "\n";
	rasberryPie.summary();

	ApricotPie apricotPie;
	std::cout << apricotPie.description() << "\n";
	apricotPie.summary();

	return 0;
}