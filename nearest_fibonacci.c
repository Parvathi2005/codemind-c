#include<stdio.h>
int main(){
    int first=0,second=1,nxt=0,num;
    scanf("%d",&num);
    while(num>nxt){
        nxt=first+second;
        first=second;
        second=nxt;
    }
    if(num-first<second-num){
        printf("%d",first);
    }
    else if(num-first==second-num){
        printf("%d %d",first,second);
    }
    else{
        printf("%d",second);
    }
}