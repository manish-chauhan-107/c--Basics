#include<stdio.h>
int main () {
    int marks;
    printf("enter marks : ");
    scanf("%d" , &marks );

    if ( marks > 33 && marks <= 100 )
    {
        printf("Pass");
    } 
    else if ( marks > 100 ) 
    {
        printf("You enter wrong MARKS");
    }
    else {
        printf ("Fail");
    }

    return 0 ;
    
}
