#include <stdio.h>

/* Determine whether arguments be added without overflow */
int tadd_ok(int x, int y);

int main()
{
	int a = 2147483646;
	int a1 = 2;
	int b = -2147483647;
	int b1 = -2;
	printf("%d\n%d\n%d\n", tadd_ok(a, a1), tadd_ok(b, b1), tadd_ok(2147483647,-2147483648));
	return 0;
}

int tadd_ok(int x, int y)
{
	int sum = x + y;
	if (x > 0 && y > 0 && sum <= 0) {
		return 0; 	//positive overflow
	}

	if (x <= 0 && y <= 0 && sum > 0) {
		return -1;	//negative overflow
	}

	return 1;
}
/*
 * 0
 * -1
 *  1
 */
