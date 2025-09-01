#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        if (num % 3 == 0) {
            printf("The number is divisible by both 2 and 3.\n");
        } else {
            printf("The number is divisible by 2 but not by 3.\n");
        }
    } else {
        if (num % 3 == 0) {
            printf("The number is divisible by 3 but not by 2.\n");
        } else {
            printf("The number is not divisible by 2 or 3.\n");
        }
    }

    return 0;
}