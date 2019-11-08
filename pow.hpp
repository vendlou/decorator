#ifndef __POW_HPP__
#define __POW_HPP__
#include "base.hpp"

class Pow :public Base {
private:
	Base* left;
	Base* right;
	Base* parent;
public:
	Pow() {
		left = nullptr;
		right = nullptr;
		parent = nullptr;
	}
	Pow(Base*, Base*);
	double evaluate() {
		double num1 = left->evaluate();
		double num2 = right->evaluate();
		for (int i = 1; i < num2; i++) {
			num1 *= num1;
		}
		return num1;
	}
	std::string stringify() {
		return left->stringify() + "**" + right->stringify();
	}
	void setleft(Base*);
	void setright(Base*);
	void setfather(Base*);
};
Pow::Pow(Base* pointer1, Base* pointer2) {
	left = pointer1;
	right = pointer2;
	parent = nullptr;
}
void Pow::setleft(Base* pointer){
	left = pointer;
}
void Pow::setright(Base* pointer) {
	right = pointer;
}
void Pow::setfather(Base* pointer) {
	parent = pointer;
}
#endif

