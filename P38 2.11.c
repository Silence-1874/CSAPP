#include <stdio.h>
void reverse_array(int a[], int cnt) {
	int first, last;
	for (first =0, last = cnt-1;
		first <= last;
		first++,last--)
		inplace_swap(&a[first], &a[last]);
}

void inplace_swap(int *x, int *y ) {
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

int main()
{
	int a[] = {1, 2, 3, 4};
	int b[] = {1, 2, 3, 4, 5};

	reverse_array(a, 4);
	reverse_array(b, 5);

	printf("a : ");
	for (int i = 0; i < 4; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("b : ");
	for (int j = 0; j < 5; j++) {
		printf("%d ", b[j]);
	}
	printf("\n");

	return 0;
}
/*
 * a : 4 3 2 1 
 * b : 5 4 0 2 1 
 */
