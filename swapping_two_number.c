#include<stdio.h>
void swap(int *x , int *y);
int main(){
        int a = 96;
        int b = 69;
        printf("before swapping (%d, %d)\n" , a , b );
        swap(&a , &b);
        printf("after swapping  (%d, %d)" , a , b );
      return 0;
}
void swap (int *x , int *y)
{
        int m;
        m = *x;
        *x = *y;
        *y = m;
}
