#include<stdio.h>
int main()
{
    long long int mno,c=0;
    scanf("%lld",&mno);
    while
    (mno>0)
     {
        mno=mno/10;
        c++;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}