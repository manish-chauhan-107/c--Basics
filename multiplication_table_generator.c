//tables generator
#include<stdio.h>
int main ()
{
    int a , i;
    printf("Enter a number: ");
    scanf("%d",&a);
    for (i=1 ; i<=10 ; i++)
    {
        printf ("%d x %d = %d \n" , a , i , a*i );     // [2 x 5 = 10] table print like this 
    }
   
    return 0 ;
}
