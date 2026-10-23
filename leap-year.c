#include <stdio.h>
int main(){ 
    int a;
    printf("enter year you want to check : \n" );
    scanf("%d", &a );
    if (a%4==0){
        if(a%100!=0){
        printf("yes this is a leap year .");
        }else {
            printf(" Not a leap year .");
        }
    } else if (a%400==0){
        printf("yes it is a leap year . ")
    } 
    else {
        printf("this is not a leap year . ");
    }
    return 0;
}