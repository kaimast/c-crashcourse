#include "string.h"
#include "stdio.h"

int main() {
    char *str1 = "hello world";
    char str2[6];

    strcpy(str2, str1+6);
    printf("%s\n", str2);

    return 0;
}
