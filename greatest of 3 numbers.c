#include <stdio.h>

int main() {
    int a, b, c;

    // Ask the user to enter three numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    // Compare the numbers to find the greatest
    if (a >= b && a >= c) {
        printf("The greatest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The greatest number is: %d\n", b);
    } else {
        printf("The greatest number is: %d\n", c);
    }

    return 0;
}