//Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

#include <stdio.h>
int main(int argc, char const *argv[])
{
	char X;
	scanf("%c", &X);

	if (X >='a' && X<='z')
	{
		X = X - 32;
		printf("%c", X);
	}
	else
	{
		X = X + 32;
		printf("%c", X);
	}
	return 0;
}
