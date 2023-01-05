#include<stdio.h>
int main()
{
 int n,sum=0,pro=1,r;
 scanf("%d",&n);
 for(;n>0;)
 {
     r=n%10;
     sum=sum+r;
     pro=pro*r;
     n=n/10;
 }
  if(sum==pro) printf("Spy Number");
  else printf("Not Spy Number");
}