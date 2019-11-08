#ifndef __BUBBLESORT_HPP__
#define __BUBBLESORT_HPP__
#include "sort.hpp"
#include "VectorContainer.hpp"
class BubbleSort :public Sort {
public:
	void sort(Container*);
};

void BubbleSort::sort(Container* container) {
	for (int i = 0; i < container->size() - 1; i++)
		for (int j = container->size()-1; j > i; j--) {
			if (container->at(j - 1)->evaluate() > container->at(j)->evaluate())
				container->swap(j - 1, j);
		}
}
#endif


