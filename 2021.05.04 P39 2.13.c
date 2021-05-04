#include <stdio.h>

/* Declarations of functions implementing operations bis and bic */
int bis(int x, int m);
int bic(int x, int m);

/* Compute x|y using only calls to functions bis and bic */
int bool_or(int x, int y) {
	int result = bis(x, y);   //(1)
	return result;
}

/* Compute x^y using only calls to functions bis and bic */
int bool_xor(int x, int y) {
	int result = bis(bic(x, y), bic(y, x));	 //(2)
	return result;
}
