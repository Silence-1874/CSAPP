#include <stdio.h>
void inplace_swap(int *x, int *y) {
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

int main()
{
	int a = 3;
	int b = 8;
	inplace_swap(&a, &b);
	printf("a = %d, b = %d", a, b);
	return 0;
}
/*
 * a = 8, b = 3
 */
