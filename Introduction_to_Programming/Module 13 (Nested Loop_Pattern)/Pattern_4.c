#include <stdio.h>
int main()
{
	int n, star = 1, i, j;
	scanf("%d", &n);
	int space = n-1; // Space is n-1 from beginning
	
	for(i=1; i<=n; i++)  // Line Printing
	{
		for(j=1;j<=space;j++) // Space Printing
		{
			printf(" ");
		}
		for(j=1;j<=star;j++) // Star Printing
		{
			printf("*");
		}
		printf("\n");
		star++;  // Star increasing in star+1 rate
		space--; // Space Decreasing each line
	}
	return 0;
}
