#include <stdio.h>
#include <string.h>

int main() {
    char name[15];   // space to store up to 14 characters + NULL

    //  Ask the user to enter a string
    printf("Enter your name: ");
    scanf("%s", name);    // reads the name (no spaces)

    //  Print the string back
    printf("You entered: %s\n", name);

    //  Find string length
    int length = strlen(name);

    //  Present the length
    printf("The length of your name is: %d characters\n", length);

    return 0;
}
