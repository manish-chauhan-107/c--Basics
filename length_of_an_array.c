#include<stdio.h>
int  main(){
int a[10] = {1,2,3,4,5,6,7,8,9,10};
int total_size_in_bytes = sizeof(a);
int length = sizeof(a)/sizeof(a[0]);
printf("%d is the total size in bytes  " , total_size_in_bytes);
printf("%d is the length of the array " , length);
return 0 ;
}