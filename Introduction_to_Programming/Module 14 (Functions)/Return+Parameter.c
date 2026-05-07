#include <stdio.h>

// Function syntax
//
// retun_type function_name ()
// {
//	
//	return
// }

int sum(int num1,int num2) // need to specify each data type
{
	int ans = num1 + num2;
	return ans;        // After finishing every needed task 
}

int sub(int num1, int num2)
{
	int ans = num1 - num2;
	return ans;
}

int main()
{
	int ans = sum (10,5); // giving input here, not by scanf
	int ans2 = sum (-10,5);
	int ans3 = sum (2,5);
	
	printf("%d %d %d\n\n", ans,ans2,ans3);
	
	ans = sub(10,5);
	ans2 = sub(-9,-8);
	ans3 = sub(2,5);
	
	printf("%d %d %d\n", ans,ans2,ans3);
	return 0;
}
