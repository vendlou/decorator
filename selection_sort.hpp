#ifndef __SELECTIONSORT_HPP__
#define __SELECTIONSORT_HPP__
#include "sort.hpp"
#include "VectorContainer.hpp"
class SelectionSort :public Sort {
public:
	void sort(Container*);
};
void SelectionSort::sort(Container* container) {
	for (int i = 0; i < container->size(); i++) {
		int min = i;
		for (int j = i; j < container->size(); j++) if (container->at(j)->evaluate() < container->at(min)->evaluate()) min = j;
		if (min != i) container->swap(i, min);
	}
}
#endif

