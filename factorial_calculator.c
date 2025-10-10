#include<stdio.h>
int main (){
   int a;
   int multiply = 1;
    printf("Enter number: ");
    scanf("%d" , &a);
    for (int i = a; i>0 ; i = i - 1)
    {
        multiply = multiply*i;
    }
     printf("%d! = %d " ,a ,multiply );
    return 0 ;
}
