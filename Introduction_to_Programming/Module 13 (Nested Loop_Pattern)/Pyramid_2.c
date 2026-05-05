#include <stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	int star = (n*2)-1;
	int space = n-1; // Space is n-1 from beginning
	
	for(i=1; i<=n; i++)  // Line Printing
	{
		for(j=1;j<=space;j++) // Space Printing
		{
			printf(" ");
		}
		for(j=star;j>=1;j--) // Star Printing
		{
			printf("*");
		}
		printf("\n");
		star-=2;  // Star increasing in star+2 rate
		space++; // Space Decreasing each line
	}
	return 0;
}
