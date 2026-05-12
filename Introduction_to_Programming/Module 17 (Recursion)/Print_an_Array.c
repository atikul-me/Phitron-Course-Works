#include <stdio.h>

void hello(int i,int n,int a[])
{
  if(i==n)
  {
    return;
  }
  printf("%d\n",a[i]);
  hello(i+1,n,a);
}

int main()
{
  int i = 0;
  int n = 3, a[3]={10,20,30};
  hello(i,n,a);
  return 0;
}