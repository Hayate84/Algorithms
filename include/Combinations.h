#ifndef COMBINATIONS_H
#define COMBINATIONS_H

/*
===============================================================================
	Class to print the n, k combinations
===============================================================================
*/

class Combinations {

public:
	Combinations();
	~Combinations();


	void print(int n, int k, const char * items);

private:

	void _print_array(const char * items, const int size);

	void _combinations_recursive(int index, int start, int end, const char * items, char ** temp, const int n, const int k);

};

#endif
