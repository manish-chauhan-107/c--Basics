#include<stdio.h>
int main (){
    int arr[5] = {1,2,3,2,4};
    for (int i = 0 ; i < 5 ; i++)
    {
      int rep = 0;
      for (int j = 0 ; j < 5 ; j++)
      {
         if (arr[i] == arr[j])
         {
            rep = rep + 1 ;
         }
         else 
         rep = rep ;
      }
      printf ("%d repeted in array %d times \n " , arr[i] , rep);
    }
    return 0 ;
}
