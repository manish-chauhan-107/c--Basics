#include<stdio.h>
int main (){
    int a ;
    printf("Enter number: ");
    scanf ("%d" , &a);
    int i =1;
     while (i <= a){
        printf ("%d  " , i);
        i = i+2 ;
     }
    return 0 ;
}
