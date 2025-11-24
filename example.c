#include<stdio.h>
int main ()
{
    int array[10];
    int odd = 0;
    for (int i =0 ; i < 10; i++)
    {
        printf("enter %d element : " , i+1);
        scanf ("%d" , &array[i]);
    }
     for (int i =0 ; i < 10; i++)
     {
        if (array[i] % 2 != 0 )
        {
           odd = odd + 1;
        }
        else 
          odd = odd;
     }
     printf("No of odd element in array is equal to %d " , odd);
    return 0;
}