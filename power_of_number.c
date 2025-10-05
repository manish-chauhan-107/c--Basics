#include<stdio.h> 
#include<math.h>
int main ()
{
    int a , b ;
    printf("Enter base: ");
    scanf("%d" , &a );
    printf("Enter power: ");
     scanf("%d" , &b );

     printf("Answer = %.2f." , pow(a , b));
    
    return 0;
}
