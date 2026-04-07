## Solution 01

#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	if (a%b==0 || b%a==0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	
	return 0;
	}

## Solution 2

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum1 = a % b;
    int sum2 = b % a;

    if (sum1 == 0)
    {
        printf("Yes\n");
    }
    
    else if(sum2 == 0)
    {
        printf("Yes\n");
    }

    else 
    {
        printf("No\n");
    }

    return 0;
}
