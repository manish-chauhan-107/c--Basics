#include<stdio.h>
int main(){
    int number , i ;
    printf("enter number : ");
    scanf("%d" , &number );
    
    for ( i = 1 ; i <= number ; i =  i+1 )
    {
        printf (" %d " , i  );
    }
return 0;
}
