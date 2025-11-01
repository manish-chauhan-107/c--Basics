#include<stdio.h>
int sumOfdigit (int *x);
int main(){
    int a ;
    printf("Enter number: ");
    scanf("%d" , &a );
     printf("%d" , sumOfdigit(&a));
    return 0 ;
}
int sumOfdigit (int *x)
{
    int sum = 0;   
    while( *x > 0 )
    {
         sum = sum + (*x % 10) ;
          *x = (*x)/10;
    }
    return sum ;
