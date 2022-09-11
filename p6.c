#include "stdio.h"

int main() {
    char var = 0;
    char *ptr = &var;

    if (var || ptr) {
        printf("A\n");
    } else {
        printf("B\n");
    }

    return 0;
}
