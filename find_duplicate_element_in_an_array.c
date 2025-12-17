#include<stdio.h>
int main (){
    int arr[5] = {1,2,3,2,3};
    for (int i = 0 ; i < 5 ; i++)
    {
      for (int j = i + 1 ; j < 5 ; j++)
      {
         if (arr[i] == arr[j])
         {
               printf ("%d repeted in array \n" , arr[i] );
               break ;
         }
      }
   
    }
    return 0 ;
}