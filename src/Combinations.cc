#include <cstdio>

#include "Combinations.h"

/*
==============
Combinations::Combinations()
==============
*/
Combinations::Combinations() {

}

/*
==============
Combinations:print
==============
*/
void Combinations::print(int n, int k, const char * items) {

	char * temp = new char[n];

        this->_combinations_recursive(0, 0, k - 1, items, &temp, n, k);

        delete[] temp;
}	

/*
==============
Combinations:_combinations_recursive
==============
*/
void Combinations::_combinations_recursive(int index, int start, int end, const char * items, char ** temp, const int n, const int k) {

        if (end == -1) {

                this->_print_array(*temp, k);

        } else {

                for (int i = start; i < n - end; i++) {

                        (*temp)[index] = items[i];

                        this->_combinations_recursive(index + 1, i + 1, end - 1, items, temp, n, k);
                }
        }
}

/*
==============
Combinations:_print_array
==============
*/

void Combinations::_print_array(const char * items, const int size) {

        printf("{");

        for (int i = 0; i < size - 1; i++) {

                printf("%c, ", items[i]);
        }

        printf("%c}\n", items[size - 1]);
}

/*
==============
Combinations::~Combinations()
==============
*/
Combinations::~Combinations() {

}
