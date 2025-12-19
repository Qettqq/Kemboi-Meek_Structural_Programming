#include <stdio.h>

// Function using pointers to swap original values

 void swapNumbers(int *x, int *y) {

    int temp = *x;

    *x = *y;

    *y = temp;
}

int main() {

    int a = 23, b = 13;

    printf("Before Swap: a = %d, b = %d\n", a, b);


    swapNumbers(&a, &b);

    printf("After Swap:  a = %d, b = %d\n", a, b);

    return 0;
}
