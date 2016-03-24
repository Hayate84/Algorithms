#include "QuickSort.h"
#include <stdio.h>

int partition(int *array, int left, int right)
{
	int key, m, i;
  
	key = array[left];	
	m   = left;
	
	for (i = left + 1; i < right + 1; i++) {
		if(array[i] <= key)
		{
			++m;
			swap(&array[i], &array[m]);
		}
	}
	
	swap(&array[left], &array[m]);
	return m;
}

void QuickSort(int *array, int left, int right)
{
	int m;
	
	if (left < right)
	{
		m = partition(array, left, right);
		QuickSort(array, left, m - 1);
		QuickSort(array, m + 1, right);
	}
}

void swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a   = *b;
	*b	 = temp;
}
