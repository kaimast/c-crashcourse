#include "stdio.h"

int main() {
    float numbers[] = {1.0f, 2.0f, 3.0f, 4.0f};

    float *ptr = &numbers[1];
    float var = *(ptr+2) + 1;

    printf("%f", var);

    return 0;
}
