#include <stdio.h>
int main()
{
	int n, star = 1, i, j;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1;j<=star;j++)
		{
			printf("*");
		}
		printf("\n");
		star++;
	}
	return 0;
}
