#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

   
    temp = a;
    a = b;
    b = temp;
    printf("After swap (temp): a=%d b=%d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap (arithmetic): a=%d b=%d\n", a, b);

    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swap (XOR): a=%d b=%d\n", a, b);

    return 0;
}
