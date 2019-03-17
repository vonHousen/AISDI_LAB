//
// Created by Kamil Zych on 17.03.2019.
//

#ifndef AISDI_LAB_BUBBLESORT_H
#define AISDI_LAB_BUBBLESORT_H

#include <iostream>

class BubbleSort
{

	int* table;
	int length;

public:
	BubbleSort(int[] , int length_);
	~BubbleSort();

	void sort();

	friend std::ostream &operator<<(std::ostream &output, const BubbleSort &B);
};

#endif //AISDI_LAB_BUBBLESORT_H