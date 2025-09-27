#include<stdio.h>
int main ()
{
    int i , a , z ;
    int isprime = 1;
    printf ("Enter number: ");
    scanf ("%d" , &a );
    for( i=2; i<=a ; i=i+1 )
    {           
        for (z=2 ; z<i ; z=z+1)
        {   
            isprime=1;
            if (i%z==0)
            {
            isprime=0;
            break;
            }
        }  
         if (isprime==1)
        {
        printf("%d ," , i );
        }
    }
     return 0;
}
