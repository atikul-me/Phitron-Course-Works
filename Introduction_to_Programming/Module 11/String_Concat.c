#include <stdio.h>
#include <string.h>
int main()
{
		int a[101],b[101],i;
		scanf("%s %s", a, b);
		int length_a = strlen(a);
		int length_b = strlen(b);
		
		for(i=0;i<=length_b;i++)
		{
			a[i+length_a]=b[i];
		}
		printf("%s %s", a, b);
	return 0;
}
