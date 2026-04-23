#include <stdio.h>
#include <string.h>
int main()
{
	int a[101], b[101], i;
	scanf("%s %s", a, b);
	
	strcpy(a,b); // String copy function included in <string.h>
	
	printf("%s %s", a, b);
	
	return 0;
}
