#include<stdio.h>
void octahydral(int x); 
int main (){
    int n;
    printf("Enter number: ");
    scanf(" %d" , &n);
    if (n == 0)
    {
     printf("0");
    }
    else
    octahydral(n); 
    return 0;
}
void octahydral(int x){ 
   if (x == 0)
   return ;
   octahydral(x / 8); 
   printf(" %d" , x % 8); 
}
