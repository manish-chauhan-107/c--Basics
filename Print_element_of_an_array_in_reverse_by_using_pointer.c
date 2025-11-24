#include<stdio.h>
int main ()
{
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  for (int n = 9 ; n >= 0 ; n--)
  {
    int *ptr = &array[n];
    printf ("%d\t " , *ptr);
  }
  return 0;
}
