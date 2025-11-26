#include<stdio.h>
int main ()
{
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  for (int n = 0 ; n < 5 ; n++)
  {
    int temp = array[n];
    array[n] = array[(9-n)] ;
    array[(9-n)] = temp ;
  }
   for (int i = 0 ; i < 10 ; i++)
   {
      printf ("%d\t" , array[i] );
   }
  return 0 ;
}
