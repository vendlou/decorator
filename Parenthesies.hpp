#ifndef __PARENTHESIES_HPP__
#define __PARENTHESIES_HPP__

#include "Decorator.hpp"
class Parenthesies :public Decorator {
public:
	Parenthesies(Base* expression) :Decorator(expression) {};
	std::string stringify();
};
std::string Parenthesies::stringify() {
	return '('+Decorator::stringify()+')';
}
#endif
