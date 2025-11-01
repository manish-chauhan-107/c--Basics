#include<stdio.h>
int SumOfArray (int x[7]);
int main () {
    int a[7] ;
    printf("Enter 7 numbers:\n");
    for(int i = 0; i < 7; i++) {
        scanf("%d", &a[i]);
    }
    printf ("%d " , SumOfArray (a));
    return 0;
}
int SumOfArray (int x[])
{
    int sum = 0;
    for (int j=0 ; j < 7 ; j++ )
    {
        sum = sum + x[j]; 
    }
    return sum ;
}
