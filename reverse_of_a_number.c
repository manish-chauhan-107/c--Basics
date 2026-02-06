#include<stdio.h>
int reverse(int *x);
int main(){
    int a ;
    printf("Enter number: ");
    scanf("%d" , &a);
    int number = reverse(&a);
     printf("%d" ,number);
    return 0;
}
int reverse(int *x)
{
  int num = 0;
  int r ; // r =rem
  while (*x > 0)
  {
     r = *x % 10 ;
     num = (num * 10)+ r;
     *x = *x/10;
  }
  return num ;   
}
