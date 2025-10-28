#include<stdio.h>
int main (){
    int a[5] = {1,2,3,4,5};
    int b[6] = {6,7,8,9,10,11};
    int c[11];
    int i , j ;
    for (i=0 ; i<5 ; i++ )
    {
        c[i] = a[i];
    }
    for (j=0 ; j<6 ; j++ )
    {
        c[i+j] = b[j];
    }
    
    printf("array Merged:");
    for (int k = 0; k < 11; k++)
    {
        printf("%d ", c[k]);
    }
    return 0;
}
