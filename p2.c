#include "string.h"
#include "stdio.h"

int main() {
    float numbers1[] = {1.0, 2.0, 3.0, 4.0};
    float numbers2[2];

    memcpy(numbers2, numbers1, 2*sizeof(float));
    numbers1[1] += 5.0;

    printf("[");
    for (int i = 0; i < 2; ++i) {
        printf("%f,", numbers2[i]);
    }

    printf("]\n");
    return 0;
}
