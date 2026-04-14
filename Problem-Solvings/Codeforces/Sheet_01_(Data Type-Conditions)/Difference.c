// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

#include <stdio.h>
int main()
{
	long long int A,B,C,D;
	long long int X=0;
	scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
	
	X=A*B;
	X=X-(C*D);
	
	printf("Difference = %lld\n", X);
	
	return 0;
}
