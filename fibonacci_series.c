#include<stdio.h>
int main (){
    int a , b , n ;
    a = 0 ;
    b = 1 ;                                         
    int sum = 0 ;
    printf("Enter number: ");
    scanf("%d" , &n);
    for (int i =1 ; i<= n ; i++ )
    {
       sum = sum + a ;
       printf("%d , " , sum );
       a = b ;
       b = sum ;
    }
    return 0 ;
}
