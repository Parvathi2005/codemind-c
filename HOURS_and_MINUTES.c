#include<stdio.h>
int main()
{
    int n,hr,min;
    scanf("%d",&n);
    hr=n/60;
    min=n%60;
    printf("%d Hour(s) %d Minute(s)",hr,min);
}