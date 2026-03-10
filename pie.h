#ifndef PIE_H
#define PIE_H
#include <string>


class Pie {
public:
	virtual std::string description() = 0;
	std::string tastiness();
	virtual ~Pie() = default;
};

#endif // PIE_H#pragma once