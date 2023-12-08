#include <stdio.h>
int main(){
    int tim=0;
    printf("enter the time in sec : ");
    scanf("%d",&tim);
    int hours=tim/3600;
    int minutes = (tim%3600)/60;
    int sec = (tim%3600)%60;
    printf("the hours is %d\n ",hours);
    printf("the minutes is %d\n ",minutes);
    printf("the sec is %d ",sec);
    return 0;
	
}