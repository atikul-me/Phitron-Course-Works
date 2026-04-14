#include <stdio.h>
int main()
{   
     int X, Y;
	long long int value1=0,value2=0,value3=0;
	scanf("%d %d", &X, &Y);
	
	 value1=X+Y;
	 value2=(long long int)X*Y;
	 value3=X-Y;
	
	printf("%d + %d = %lld\n", X,Y,value1);
	printf("%d * %d = %lld\n", X,Y,value2);
	printf("%d - %d = %lld\n", X,Y,value3);
	
	return 0;
}
