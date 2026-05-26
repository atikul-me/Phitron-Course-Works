#include <bits/stdc++.h>
using namespace std;
int main()
{
//	int a[]; Static array

	int* a = new int[5]; // Dynamic Array
	int i;
	
	for(i=0; i<5; i++)
	{
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
