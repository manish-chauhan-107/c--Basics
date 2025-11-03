//swap of two number without using third variable 
#include<stdio.h>
void swap(int *x ,int *y)
{
        *x = *x + *y ;
        *y = *x - *y ;
        *x = *x - *y ;

}
int main(){
        int a = 69 ;
        int b = 88 ;
        printf("before swapping (%d , %d) \n" ,  a , b);
        swap(&a , &b);
        printf("before swapping (%d , %d) \n" ,  a , b);
       return 0;
}
