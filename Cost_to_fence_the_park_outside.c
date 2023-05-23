#include<stdio.h>
int main()
{
    int l,b,w,c,area,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area=(l+2*(w))*(b+2*(w))-(l*b);
    tc=c*area;
    printf("%d",tc);
}