// prime number 
#include<stdio.h>
 int main ()
 {
     int a , isprime =1;
     printf ("Enter number: ");
     scanf("%d" , &a );
     int i ;
      if ( a<=1)
      {
         printf("Not a prime number"); 
         return 0 ; 
      }
     for (i = 2 ; i<a/2 ; i=i+1)
         {
             if (a % i == 0)
              { isprime = 0;
                 break ;
              }
         }
     if (isprime == 1)
         {
             printf("%d is a prime number." , a);
         } 
    else
        { 
          printf("Not a prime number");
        }
 return 0 ;
}
