#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Manish";
    char str2[20] = "Chauhan";
    char str3[40];
    printf("Length of str1 = %d\n", strlen(str1));     // strlen()
    strcpy(str3, str1);                                // strcpy()
    printf("After strcpy, str3 = %s\n", str3);
    strcat(str3, str2);                                // strcpy()
    printf("After strcat, str3 = %s\n", str3);
    if (strcmp(str1, str2) == 0)                       // strcmp()
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
    strlwr(str1);                                      // convert to lowercase
    printf("Lowercase: %s\n", str1);
    strupr(str1);                                      // convert to uppercase
    printf("Uppercase: %s\n", str1);

    return 0;
}
