#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", n > 0 ? "Positive" : n < 0 ? "Negative" : "Zero");
    return 0;
}