#include<stdio.h>
int main (){
    int a[5] = {3,4,5,6,8};
    int b[5] ;
    int i , j ;
    for (i=0 ; i < 5 ; i++)
    {
        b[i] = a[4-i];
    }
    printf("array reverse: ");
     for (i = 0; i < 5; i++) 
     {
        printf("%d ", b[i]);
     }
    return 0 ;
}
