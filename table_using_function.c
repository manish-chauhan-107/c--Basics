#include<stdio.h>
void table(int a);

int main ()
{
    int a ;
    printf("Enter frist number: ");
    scanf("%d" ,&a ); 
    table(a);
    return 0;
}
void table(int a){
    for (int i=1 ; i<=10 ; i=i+1 ){
        printf("%d x %d = %d \n" , a , i , i*a);
    }
}
