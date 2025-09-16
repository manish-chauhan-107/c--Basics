//Greatest integer function of a number
#include<stdio.h>
#include<math.h>
int main()
{
 float number;
 printf ("Enter number : ");
 scanf ("%f" , &number );

 int a = (int) number ;

    if (number > 0)
     {
        printf("%d" , a );
     }
    else if (number = 0 )
     {
       printf ("%d" , 0 );
    }
    else 
    {
        printf ("%d" , a - 1 );
    }
    return 0;
}
