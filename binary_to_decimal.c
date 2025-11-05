#include<stdio.h>
void binary(int x);
int main (){
    int n;
    printf("Enter number: ");
    scanf(" %d" , &n);
    if (n == 0)
    {
     printf("0");
    }
    else
    binary(n);
    return 0;
}
void binary(int x){
   if (x == 0)
   return ;
   binary(x / 2 );
   printf(" %d" , x % 2);
}
