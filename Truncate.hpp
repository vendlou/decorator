#ifndef __TRUNCATE_HPP__
#define __TRUNCATE_HPP__

#include "Decorator.hpp"
class Trunc:public Decorator {
public:
	Trunc(Base* expression) :Decorator(expression) {};
	std::string stringify();
};
std::string Trunc::stringify() {
	return std::to_string(Decorator::evaluate());
}
#endif
