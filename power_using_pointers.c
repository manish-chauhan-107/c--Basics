#include<stdio.h>
#include<math.h>
int power(int *x , int *y);
int main (){
    int a , b ;
    printf("enter base: ");
    scanf("%d" , &a);
    printf("enter power: ");
    scanf("%d" , &b);
    power(&a , &b);
    return 0;
}
int power(int *x , int *y)
{
    int m = pow(*x , *y);
    printf("%d" , m);
    return m;
}
