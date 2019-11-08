#ifndef __LISTCONTAINER_HPP__
#define __LISTCONTAINER_HPP__

#include <list>
#include <string>
#include "container.hpp"
#include "bubble_sort.hpp"
#include "selection_sort.hpp"
#include "base.hpp"
#include "Ceil.hpp"
#include "Floor.hpp"
#include "Abs.hpp"
#include "Truncate.hpp"
#include "Parenthesies.hpp"
#include <iostream>

class ListContainer :public Container {
private:
	std::list<Base*> container;
public:
	void add_element(Base*);
	void print();
	void sort();
	void swap(int, int);
	Base* at(int);
	int size();
};
void ListContainer::add_element(Base* element) {
	container.push_back(element);
}
void ListContainer::print() {
        std::list<Base*>::iterator iter;
	for ( iter = container.begin(); iter != container.end(); iter++) std::cout << (*iter)->stringify() << '=' << (*iter)->evaluate() << std::endl;
}
void ListContainer::sort() {
	sort_function->sort(this);
}
void ListContainer::swap(int i, int j) {
	int index = 0;
	std::list<Base*>::iterator iti;
        std::list<Base*>::iterator itj;
	std::list<Base*>::iterator it;
	for (it = container.begin(); it != container.end(); it++)
	{
		if(index == i)
		      iti = it;
	    if(index == j)
	        itj = it;
	    index++;
		
	} 
	std::swap(*iti,*itj);
}
Base* ListContainer::at(int num) {
	std::list<Base*>::iterator it;
	int count = 0;
	for (it = container.begin(); it != container.end(); it++) {
		if(count == num) break;
		count++;
        }
	
	return *it;
}
int ListContainer::size() {
	return container.size();
}
#endif


