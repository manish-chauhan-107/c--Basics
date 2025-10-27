#include<stdio.h>
int main (){
        int a[1][5] = {2 ,4 ,67 ,56 ,45 };
        int sum = 0;
                for (int j = 0 ; j < 5  ; j++)
                {
                        sum = sum + a[0][j] ;
                }
           printf("Sum of all the element of the given metrix is equal to %d \n" , sum );
        return 0 ;
}
