#include <stdio.h>
int main(){
    int a=0;
    printf("enter the value for a : ");
    scanf("%d",&a);
    int res=0;
    int k=0;
    int n=0;
    while(a>0){
        k=a%10; //1
        n=a/10;//25
        while(n>0){
            n=n/10;//2 //0
            k*=10;//10 //100
        }
        res+=k;
        a=a/10;
    }
    printf("the result is %d ",res);
}