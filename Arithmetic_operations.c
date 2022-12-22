#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int sum=x+y,d=x-y,p=x*y,q=x/y,r=x%y;
    printf("Sum:%d
",sum);
    printf("Difference:%d
",d);
    printf("Product:%d
",p);
    printf("Quotient:%d
",q);
    printf("Remainder:%d",r);
}