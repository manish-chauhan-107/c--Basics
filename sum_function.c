#include<stdio.h>
int sum (int x , int y);

int main ()
{
    int a , b ;
    printf("Enter frist number: ");
    scanf("%d" ,&a ); 
    printf("Enter second  number: ");
    scanf("%d" ,&b ); 

    int s = sum( a , b);
    printf("sum is : %d" , s );
    return 0;
}
int sum (int x ,int y ){
    return x + y ;
}
