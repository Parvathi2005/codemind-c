#include<stdio.h>
int main()
{
   int i,rem, rev, temp,l,u;
   scanf("%d%d",&l,&u);
   for(i=l;i<=u;i++)
   {
      temp=i;
      rev=0;
      while(temp)
      {
         rem=temp%10;
         temp=temp/10;
         rev=rev*10+rem;
      }
      if(i==rev)
         printf("%d ",i);
   }
}