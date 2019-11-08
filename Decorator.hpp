#ifndef __DECORATOR_HPP__
#define __DECORATOR_HPP__

#include "base.hpp"
#include "add.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "op.hpp"
#include "pow.hpp"
#include "sub.hpp"

class Decorator :public Base {
private:
	Base* expression;
public:
	Decorator() { expression = nullptr; }
	Decorator(Base* expression) { this->expression = expression; }
	double evaluate() { return expression->evaluate();}
	std::string stringify() { return expression->stringify(); }
};

#endif
