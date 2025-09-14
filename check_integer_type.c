#include<stdio.h>
#include<math.h>
int main(){
   int number;
   printf("Enter number: ");
   scanf("%d" , &number );

   if (number > 0) 
   {
     if (number % 2 == 0)
     {
       printf (" Number is positive \n Number is Even");
     }
     else
      {
         printf (" Number is positive \n Number is odd");
      }
    }
   else if (number < 0 )
   {
      if ( number % 2 == 0 )
        {
          printf(" Number is negative \n Number is even");
        }
      else 
        {
            printf (" Number is negative \n Number is odd");
        }
    } 
   else {
    printf ("Number is nither positive nor negative ");
   }
    return 0;
}
