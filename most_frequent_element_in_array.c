#include<stdio.h>
int main(){
    int a[7] = {2 ,3 ,4 ,4 ,4 ,3 ,5};
    int t = 0 ;
    int m ; 
    for (int i = 0 ; i < 7 ; i++){
      int p = 0 ;
      for (int j = 0 ; j < 7 ; j++)
      {
         if (a[i] == a[j])
         {
             p = p + 1;
            if (p > t)
             {
               t = p ;
               m = a[i];
             } 
         }

      }

    }
    printf ("%d " , m);
    return 0 ;
}
 