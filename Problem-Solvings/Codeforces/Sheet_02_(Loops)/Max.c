// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include <stdio.h>
int main()
{
	int i,x,max=0;
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{	
		int n;
		scanf("%d",&n);
		
		if(n>max)
		{
			max=n;
		}
	}
	printf("%d",max);
	
	return 0;
}
