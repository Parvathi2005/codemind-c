#include<stdio.h>
int main()
{ 
    int n;
    scanf("%d",&n);
    int t=n,rev=0;
    while(n)
    {
        int r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(rev==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}