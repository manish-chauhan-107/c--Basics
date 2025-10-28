#include <stdio.h>
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int max = 0;
    int i;
    for(i = 1 ; i < 5 ; i++ )
    {
       if (a[i] > max )
        max = a[i];
    }
    printf ("biggest element is %d " , max);
    return 0;
}
