//volume of a sphere with given radius
#include<stdio.h>
#include<math.h>
int main()
{

    float radius ;
    printf("enter radius ");
    scanf("%f", &radius);

    float pi = 3.14;

    //operator use '*'and '/' both has same priority. so, associativity rule work here 

    printf("volume of sphere : %.2f" , 4.0 / 3 * pi * pow(radius, 3));
    return 0;
}
