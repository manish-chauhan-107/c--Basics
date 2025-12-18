#include<stdio.h>
int main (){
    int a[6] = {16 , 34 , 56 , 76 , 77 , 7};
     for (int i =0 ; i < 6 ; i++ ){
        for (int j = 0 ; j < 6 ; j++ ){
            if (a[i] < a[j])
            {    
               int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }  
    for (int k =0 ; k < 6 ; k++ ){
    printf("%d\t" , a[k]);
    }
    return 0;
}