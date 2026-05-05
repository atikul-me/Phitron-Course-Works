#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d", &n);
	int a[n];
	
	for(i=0; i<n;i++)
	{
		scanf("%d", &a[i]); // Array Input n index times
	}
	
	int x;
	scanf("%d",&x);
	
	int flag = 0; // For checking only to print yes/no
	
	for(i=0;i<n;i++)      // i value increasing 1
	{
		for(j=i+1;j<n;j++)  // j value checks all after i
		{
			if(a[i]+a[j]==x) 
			{
				flag = 1;
				printf("YES");
				printf("%d %d", a[i],a[j]);
			}
		}
	}                            // Condition handle
	if (flag == 0)
	{
		printf("No");
	}
	return 0;
}
