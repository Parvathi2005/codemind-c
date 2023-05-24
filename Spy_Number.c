#include<stdio.h>
int main(){
    int n,sum=0,pro=1,i;
    scanf("%d",&n);
    for(;n>0;){
        i=n%10;
        sum=sum+i;
        pro=pro*i;
        n=n/10;
    }
    if(sum==pro){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}