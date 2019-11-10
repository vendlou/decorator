#ifndef __PARENTHESIES_HPP__
#define __PARENTHESIES_HPP__

#include "Decorator.hpp"
class Paren :public Decorator {
public:
	Paren (Base* expression) :Decorator(expression) {};
	std::string stringify();
};
std::string Paren::stringify() {
	return '('+Decorator::stringify()+')';
}
#endif
