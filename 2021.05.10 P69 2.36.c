#include <stdio.h>
#include <stdlib.h>
/* Determine whether the arguments without overflow */
int tmult_ok(int x, int y)
{
	int64_t pll = (int64_t) x*y;
	return pll == (int) pll;
}
