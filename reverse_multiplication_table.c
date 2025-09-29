#include<stdio.h>
int main ()
{
    int a , i;
    printf("Enter a number: ");
    scanf("%d",&a);
    for (i=10; i>=1; i--)
    {
        printf ("%d x %d = %d \n" , a , i , a*i );
    }
   
    return 0 ;
}
