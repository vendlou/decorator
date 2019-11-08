#ifndef __ABS_HPP__
#define __ABS_HPP__

#include "Decorator.hpp"
#include "math.h"
class Abs :public Decorator {
public:
	Abs(Base* expression) :Decorator(expression) {};
	double evaluate();
};
double Abs::evaluate() {
	return abs(Decorator::evaluate());
}
#endif
