#include <bits/stdc++.h>
using namespace std;

int* fun()   // Array return so int*, array store 0 index
{
	int* a = new int[5] // Dynamic Array Declare
	int i;
	
		for(i=0;i<5;i++)
		{
			cin>>a[i];
		}
		return a;
}
int main()
{
	int* x = fun();  // For catching dynamic array function
	int i;           
	
	for(i=0; i<5; i++)
	{
		cout<<x[i]<<" ";
	}	
	return 0;
}
