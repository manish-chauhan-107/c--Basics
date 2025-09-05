#include<stdio.h>
// multiplication of two number 
int main(){
    float number1, number2 ;

    printf("enter number1");
    scanf("%f", &number1 );

    printf("enter number2 ");
    scanf("%f", &number2 );

    float multiply = number1 * number2 ;
    printf("Product =  %.2f\n",multiply);
    return 0;
}