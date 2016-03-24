#ifndef __QUICKSORT__
#define __QUICKSORT__

/************************************************************** *	
 *	The c version unlike than the python one is less generic    *
 *	i will make it to sort only integers and with the simpliest *
 *  swap function just for the example.                         *
 ****************************************************************/

int partition(int *array, int left, int right);

void QuickSort(int *array, int left, int right);

void swap(int *a, int *b);

#endif
