// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

#include <stdio.h>
int main()
{
	char X;
	char a = 'a';
	scanf("%c", &X);

	if (X >='a' && X<'z')
	{
		X = X + 1 ;
		printf("%c", X);
	}
	else if(X=='z')
	{
		printf("%c", a);
	}
	return 0;
}
