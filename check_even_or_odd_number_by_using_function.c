#include<stdio.h>
void oddeven (int *x);
int main(){
    int a;
    printf("Enter number: ");
    scanf("%d" , &a );
    oddeven(&a);
    return 0;
}
void oddeven(int *x)
{
    if (*x % 2 == 0)
    {
        printf("%d is an even number." , *x);
    }
    else
    {
       printf("%d is an odd number." , *x);
    }
    return ;
}
