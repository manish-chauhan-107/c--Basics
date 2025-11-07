#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5,};
    int max = a[0];
    int maxII ;
     for (int i = 0 ; i < 5 ; i++)
    {
       if (a[i] > max )
       {  
         maxII = max;
         max = a[i];
       }
     
    } 
    printf ("%d \n" , maxII );
    return 0 ;
}
