//sum of two matrix of order 2
#include<stdio.h>
#include<conio.h>
int main(){
  int a[2][2] = {{3,4},{5,1}};  //take 1st matrix
  int b[2][2] = {{5,4},{3,1}};  //take 2nd mateix
  int c[2][2];
  for(int i =0 ;i<2 ;i++)
  {
    for(int j=0 ; j<2;j++)
    {
      c[i][j] = a[i][j] + b[i][j];     //sum of 1st and 2nd
    }
  }
  for(int i =0 ;i<2 ;i++)
  {
    for(int j=0 ; j<2;j++)
    {
      printf("%d " , c[i][j]);          //print matrix
    }
    printf("\n");
  }
  getch ();
  return 0 ;
}
