//isoscalen triangle
#include<stdio.h>
int main ()
{
    int a , j , i , n;
    printf("Enter a  odd number: ");
    scanf("%d" , &a);
    for(n = 1 ; n <= a ; n++)
    { 
         for(i=1 ; i<=a-n ; i=i+1)
        {
            printf("  ");
        }
       for(j=1; j<=2*n-1 ;j=j+1)
       {
        printf("* ");
       }
       printf("\n");
    }
    return 0 ;
}
