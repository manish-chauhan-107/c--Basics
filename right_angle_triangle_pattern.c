#include<stdio.h>
int main ()
{
    int a;
    printf("Enter a number: ");
    scanf("%d" , &a);
    for(int i = 1 ; i <= a ; i++)
    {
        for(int j = a ; j>i ; j--)
        {
            printf("1 ");
        }
        printf("\n");
    }
    return 0 ;
}
