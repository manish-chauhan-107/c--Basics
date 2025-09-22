//reverse counting print
#include<stdio.h>
int main (){
     int a , i;
     i = 1;
     printf("Enter number: ");
     scanf("%d" , &a);
    do{
        printf("%d , " ,a );
        a = a - 1 ;
    } while(a >= i);   
    return 0 ;
}
