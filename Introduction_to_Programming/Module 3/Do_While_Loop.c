#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i=1, sum=0, N;

	scanf("%d", &N);

	do
	{
		sum = sum + i;
		i++;


	}while(i<=N);

    printf("%d\n", sum);

	return 0;
}
