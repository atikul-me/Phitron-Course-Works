#include <stdio.h>

void sum(int num1, int num2) 
{
	int ans = num1 + num2; 
	
	// return (this can be added to stop and go to main)
	
	printf("%d",ans);        
}

int main()
{
	int num1,num2; 
	
	scanf("%d %d", &num1, &num2);
	
	sum(num1,num2);
	
	return 0;
}
