#include<stdio.h>
float largest(float a[] , int n);
float smallest(float a[] , int n);
int main(){
        float a[7] = {23 , 28 ,34 ,36 ,7, 77 , 777 };
        printf("%f\n" , largest(a , 7));
        printf("smallest = %f\n" , smallest(a , 7));
}
float largest(float a[] , int n)
{
        int i ;
        float max = a[0];
        for (i = 1; i < n ; i++)
        {
                if ( max < a[i])
                        max = a[i];
        }
                return(max);
}
float smallest(float a[] , int n)
{
        int i;
        float min = a[0];
        for(i=1 ;i<n ;i++)
        {
                if (min > a[i])
                       min = a[i];
        }
         return(min);
}
