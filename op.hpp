#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
private:
	double operands;
public:
	Op() {};
	Op(double value) {
		operands = value;
	}
	double evaluate() { return operands; }
	std::string stringify() { return std::to_string(operands); }
};

#endif //__OP_HPP__

