#ifndef __CEIL_HPP__
#define __CEIL_HPP__

#include "Decorator.hpp"
#include "math.h"
class Ceil :public Decorator {
public:
	Ceil(Base* expression) :Decorator(expression) {};
	double evaluate();
};
double Ceil::evaluate() {
	return ceil(Decorator::evaluate());
}
#endif
