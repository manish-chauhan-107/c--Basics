#include<stdio.h>
int main(){
    int a[5] = {2,4,5,88,69};
    int n , i;
    int s = -1 ;
    printf("Enter number for find place: ");
    scanf("%d" , &n );
    for (i=0 ; i<5 ; i++)
    {
        if(n == a[i])
        {
        s = i + 1 ;
        break;
        }
    }
    if (s != -1 )
    {
        printf("the place of %d in array is %d." , n , s);
    }
    else 
    printf("No element found .");
    return 0 ;
}
