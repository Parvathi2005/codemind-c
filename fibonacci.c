#include <stdio.h>
int main()
{
  int i,n;
  int a=0,b=1;
  int x =a+b;
  scanf("%d",&n);
  printf("%d %d ",a,b);
  for (i=3;i<=n;++i) 
  {
    printf("%d ",x);
    a=b;
    b=x;
    x=a+b;
  }
}