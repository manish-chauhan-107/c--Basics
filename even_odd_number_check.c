//a comment

#include<stdio.h>
#include<math.h>
int main (){
   int number;
    printf("enter number : ");
    scanf("%d" , &number );
   if (number % 2 == 0){
        printf("This is an even Number. \n ");
    }
    else {
        printf("This is an odd number. \n ");
    }
 /* In place of block(7-12) we can use Ternary operators.That is 
'number % 2 == 0 ? printf("This is an even number "):printf("this is a odd number ");'*/
    return 0;
    }
