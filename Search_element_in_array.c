#include <stdio.h>
int main() {
    int n , m ,i ;
    int a[6] = {1,3,5,7,9,11};
    printf("Enter an element: ");
    scanf("%d" , &n);
    for(i=1;i<6 ; i++)
    {
        if(n == a[i])
        {
        m = a[i];
        break;
        }
    }
    if(m==a[i]){
        printf("yes");
    }
    else
       printf("No element found ");
}
