#include <stdio.h>

int div16 (int x)
{
	int bias = (x >> 31) & 0xF;
	return (x + bias) >> 4;
}
