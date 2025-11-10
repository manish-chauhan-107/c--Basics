#include<stdio.h>

int factorial(int *x);

int main (){
    int a ;
    printf("enter number: ");
    scanf("%d" , &a );

    int m = factorial(&a);
    printf("factorial is %d\n" , m );

    return 0 ;
}

int factorial( int *x ){
    int m ;
    if (*x == 0 || *x == 1){
        return 1 ;
    }
    else {
        int temp = *x - 1;
        m = *x * factorial(&temp);
        return m;  
    }
}
