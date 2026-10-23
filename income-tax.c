#include <stdio.h>
int main(){
    float a;
    printf("Enter your income range in lakhs : ");
    scanf("%f", &a);
    
    if(a >= 2.5 && a <= 5){
        printf("you have to pay 5% of income tax \n ");
        float b = a * 0.05;
        printf("your income tax is %.2f\n", b);
    } else if(a > 5 && a <= 10){
        float c = a * 0.1;
        printf("you have to pay 10 percent of income tax\n", c);
        printf("your income tax is %.2f\n", c);
    } else if(a > 10 && a <= 20){
        float d = a * 0.2;
        printf("you have to pay 20% of income tax\n", d);
        printf("your income tax is %.2f\n", d);
    } else if(a > 20){
        float e = a * 0.3;
        printf("you have to pay 30% of income tax\n", e);
        printf("your income tax is %.2f\n", e);
    } else {
        printf("you are not eligible to pay income tax\n");
    }
    return 0;
}