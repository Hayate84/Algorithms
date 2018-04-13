#include <stdlib.h>
#include "fibonacciNumbers.h"

// Dynamic programic helper function 
unsigned long _fibonacciDynamic(int n, unsigned long * f) {
  if (f[n] == 0 && n != 0) {                                                    // is in the array? 
    return f[n] = _fibonacciDynamic(n - 1, f) + _fibonacciDynamic(n - 2, f);    // no compute 
  } else {                                                                      // in the array 
    return f[n];                                                                // return the value
  }
}

// Actual function that computes the fibonacci numbers
unsigned long fibonacciDynamic(int n) {
  
  // For the first values no work to be done
  if (n == 0) return 0;
  if (n == 1) return 1;

  unsigned long * array = calloc((n + 1), sizeof(unsigned long));

  if (array != NULL) {
    array[1] = 1; array[2] = 1;
    return _fibonacciDynamic(n, array);
  } else {
    perror("Malloc: ");
    exit(EXIT_FAILURE);
  }
}
