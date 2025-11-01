#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Method 1: Using a temporary variable
    temp = a;
    a = b;
    b = temp;
    printf("After swap (temp): a=%d b=%d\n", a, b);

    // Method 2: Arithmetic
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap (arithmetic): a=%d b=%d\n", a, b);

    // Method 3: Bitwise XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swap (XOR): a=%d b=%d\n", a, b);

    return 0;
}
