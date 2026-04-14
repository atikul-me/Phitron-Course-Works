// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F

#include <stdio.h>
int main()
{
	int N, i, sum = 0;
	scanf("%d", &N);
	
	for(i=1;i<=12;i++)
	{
		sum=N*i;
		printf("%d * %d = %d\n",N,i,sum);
	}
	
	return 0;
}
