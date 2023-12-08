#include <stdio.h>
int main(){
	int temp=0;
	float f;
	float k;
	printf("enter the tempeture in fanhriet : ");
	scanf("%d",&temp);
	printf("the enterd temputer is %d ",temp);
	printf("\n");
	f=(temp-32)*(5.0/9.0);
	k=f+273.1;
	int c;
	printf("enter 1 for celuise or 2 for kelvin : ");
	scanf("%d",&c);
	switch(c){
	    case 1: printf("the temp in celuise is %.2f C ",f);break;
	    case 2 :printf("the temp in kelvin is %.2f K",k);break;
	    default : printf("sorry not avaliable ");

	}
	return 0; 	
}