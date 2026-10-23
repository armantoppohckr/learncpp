#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter your income range in lakhs : ");
    scanf("%d", &a);
    
    if(a >= 2.5 && a <= 5){
        printf("you have to pay 5% of income tax \n ");
        b = a * 0.05;
        printf("your income tax is %d\n", b);
    } else if(a > 5 && a <= 10){
        c = a * 0.1;
        printf("you have to pay 10%  of income tax\n", c);
    } else if(a > 10 && a <= 20){
        d = a * 0.2;
        printf("you have to pay 20% of income tax\n", d);
    } else if(a > 20){
        e = a * 0.3;
        printf("you have to pay 30% of income tax\n", e);
    } else {
        printf("you are not eligible to pay income tax\n");
    }
    return 0;
}