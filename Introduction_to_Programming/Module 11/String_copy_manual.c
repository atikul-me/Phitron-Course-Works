#include <stdio.h>
#include <string.h>
int main()
{
	int a[101], b[101],i;
	
	scanf("%s %s",a,b);
	
	int length = strlen(b);/*Calculate length of which one's
	                        string have to be copied */
	for (i=0; i<=length; i++)
	{
		a[i]=b[i];  /* i<=length to copy the Null,exact same
		              without adding the extra string 
					  text */
	}
	printf("%s %s",a,b);
	
	return 0;
}
