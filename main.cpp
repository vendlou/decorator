#include<iostream>
#include "add.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "sub.hpp"
#include "op.hpp"
#include "VectorContainer.hpp"
#include "ListContainer.hpp"

int main() {
	Op* six = new Op(5.6);
	Ceil* CeilSix = new Ceil(six);
	Op* four = new Op(4.4);
	Floor* FloorFour = new Floor(four);
	Add* TreeA = new Add(CeilSix, FloorFour);
	Truncate* TruncateTreeA = new Truncate(TreeA);

	Op* one1 = new Op(1);
	Op* one2 = new Op(-1);
	Abs* AbsOne1 = new Abs(one1);
	Abs* AbsOne2 = new Abs(one2);
	Add* TreeB = new Add(AbsOne1, AbsOne2);
	Parenthesies* PareTreeB = new Parenthesies(TreeB);

	Add* TreeC = new Add(TruncateTreeA, PareTreeB);
	std::cout << "The Ceil of " << six->evaluate() << " is " << CeilSix->evaluate() << std::endl;
	std::cout << "The Floor of " << four->evaluate() << " is " << FloorFour->evaluate() << std::endl;
	std::cout << TreeA->stringify() << " = " << TruncateTreeA->stringify() << "=" << TreeA->evaluate() << std::endl;
	std::cout << std::endl;
	std::cout << "The Abs of " << one1->evaluate() << " is " << AbsOne1->evaluate() << std::endl;
	std::cout << "The Abs of " << one2->evaluate() << " is " << AbsOne2->evaluate() << std::endl;
	std::cout << TreeB->stringify() << " = " << PareTreeB->stringify() << "=" << PareTreeB->evaluate() << std::endl;
	std::cout << std::endl;
	std::cout<<TreeC->stringify()<<" = "<< TreeC->evaluate()<<std::endl;
}
