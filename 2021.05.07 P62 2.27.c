#include <stdio.h>
/* Determine whether arguments can be added without overflow */
int main() {
	int uadd_ok(unsigned x, unsigned y);
	int a = 2147483648 * 2 - 1;
	int b = 1;
	printf("%d\n%d\n", uadd_ok(a, b), uadd_ok(a - 1, b));
	return 0;
}

int uadd_ok(unsigned x, unsigned y)
{
	unsigned s = x + y;
	return s >= x;
}

/**
 * 0
 * 1
 */

