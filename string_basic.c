#include<stdio.h>

int main (){
    char name[20] = "Manish";
    char biodata[100];

    printf("Enter biodata: ");
    fgets(biodata, 100, stdin);

    printf("\nName: %s", name);
    printf("\nBiodata: %s", biodata);

    return 0;
}
