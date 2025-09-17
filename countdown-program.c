#include<stdio.h>
int main (){
    int i,a ;
    printf ("Enter number : ");
    scanf ("%d" , &a );
    for (i = a ; i>=0 ; i = i-1 )
    {
        printf ("%d \n" , i);
    }
    return 0 ;
}
