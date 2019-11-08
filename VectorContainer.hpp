#ifndef __VECTORCONTAINER_HPP__
#define __VECTORCONTAINER_HPP__
#include <vector>
#include "container.hpp"
#include "bubble_sort.hpp"
#include "selection_sort.hpp"
#include "Ceil.hpp"
#include "Floor.hpp"
#include "Abs.hpp"
#include "Truncate.hpp"
#include "Parenthesies.hpp"
#include <iostream>

class VectorContainer :public Container {
private:
	std::vector<Base*> container;
public:
	void add_element(Base*);
	void print();
	void sort();
	void swap(int, int);
	Base* at(int);
	int size();
        VectorContainer() {}  
};
void VectorContainer::add_element(Base* element) {
	container.push_back(element);
}
void VectorContainer::print() {
	for (int i = 0; i < container.size(); i++) std::cout << container[i]->stringify() << '=' << container[i]->evaluate() << std::endl;
}
void VectorContainer::sort() {
	sort_function->sort(this);
}
void VectorContainer::swap(int i, int j) {
	Base* p = nullptr;
	p = container[i];
	container[i] = container[j];
	container[j] = p;
}
Base* VectorContainer::at(int num) {
	return container[num];
}
int VectorContainer::size() {
	return container.size();
}
#endif

