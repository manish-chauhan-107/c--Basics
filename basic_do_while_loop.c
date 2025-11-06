#include<stdio.h>
int main (){
    int a, i;
    i = 1;
    printf("Enter number: ");
    scanf("%d" , &a);
    do{
        printf("%d ," , i);
        ++i;
    } while (i <= a);
    return 0 ;
}
