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
};

class ApplePie : public Pie {
	public:

	ApplePie(std::string desc, std::string taste) : Pie(desc, taste) {};

	std::string description() {
		return describer;
	}

	void summary() {
		std::cout << describer << " " << tastiness;
	}
};

int main() {


	ApplePie pie("yummy!", "Delicious!");
	pie.summary();


	return 0;
}