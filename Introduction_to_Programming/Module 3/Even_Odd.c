#include <stdio.h>
int main()
{
	int even, odd;

	for (even = 1; even < 11; even = even + 2)
	{
		printf("%d ", even);
	}

printf("\n");

	for (odd = 2; odd < 11; odd = odd + 2)
	{
		printf("%d ", odd);
	}

	return 0;
}
