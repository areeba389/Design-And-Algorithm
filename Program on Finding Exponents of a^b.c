#include <stdio.h>

int main() {
    int base, exponent, result = 1;
    int i;
    printf("Enter the Base & Exponent values:\n");
    scanf("%d%d", &a, &b);
    
    
    for (int i = 1; i <= b; i++) {
        result *= a;
    }
    
    printf("\nResult: %d^%d = %d\n", base, exponent, result);
    return 0;
}
