#ifndef __FLOOR_HPP__
#define __FLOOR_HPP__

#include "Decorator.hpp"
class Floor :public Decorator {
public:
	Floor(Base* expression) :Decorator(expression) {};
	double evaluate();
};
double Floor::evaluate() {
	return floor(Decorator::evaluate());
}
#endif
