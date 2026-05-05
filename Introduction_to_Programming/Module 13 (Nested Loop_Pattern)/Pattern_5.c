#include <stdio.h>
int main()
{
	int n, value = 1, i, j;
	scanf("%d", &n);
	int space = n-1; // Space is n-1 from beginning
	
	for(i=1; i<=n; i++)  // Line Printing
	{
		for(j=1;j<=space;j++) // Space Printing
		{
			printf(" ");
		}
		for(j=1;j<=value;j++) // Value Printing
		{
			printf("%d ",j);
		}
		printf("\n");
		value++;  // value increasing in value+1 rate
		space--; // Space Decreasing each line
	}
	return 0;
}
