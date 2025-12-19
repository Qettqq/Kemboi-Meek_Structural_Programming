#include <stdio.h>

int main() {

    int count = 13;

    int *pCount = &count;

    // Modify count using the pointer

    *pCount = 25;

    printf("The updated value of count is: %d\n", count);

    return 0;
}
