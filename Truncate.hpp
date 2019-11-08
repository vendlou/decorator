#ifndef __TRUNCATE_HPP__
#define __TRUNCATE_HPP__

#include "Decorator.hpp"
class Truncate :public Decorator {
public:
	Truncate(Base* expression) :Decorator(expression) {};
	std::string stringify();
};
std::string Truncate::stringify() {
	return std::to_string(Decorator::evaluate());
}
#endif
