#include <stdio.h>
int main(int argc, char const *argv[])
{
	int X;
	scanf("%d", &X);

	X = X/1000;

	if(X%2==0)
	{
		printf("EVEN\n");
	}
	else
	{
		printf("ODD\n");
	}
	return 0;
}