#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch) {
        case '0' ... '9':
            printf("Digit\n");
            break;
        case 'A' ... 'Z':
            printf("Uppercase Letter\n");
            break;
        case 'a' ... 'z':
            printf("Lowercase Letter\n");
            break;
        default:
            printf("Special Symbol\n");
    }

    return 0;
}