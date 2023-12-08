#include <stdio.h>
int main(){
    int a=0;
    int b=0;
    printf("enter the value for a : ");
    scanf("%d",&a);
    printf("enter the value for b : ");
    scanf("%d",&b);
    printf("the value of a before swap  is %d\n",a);
    printf("the value of b before swap  is %d\n",b);
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    printf("the value of a after swap  is %d\n",a);
    printf("the value of b after swap  is %d\n",b);
    
    
	
}