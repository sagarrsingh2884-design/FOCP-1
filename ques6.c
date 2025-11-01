#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        int decimal = 0, i = 0, rem;
        printf("Enter binary number: ");
        scanf("%lld", &binary);
        while (binary != 0) {
            rem = binary % 10;
            decimal += rem * pow(2, i);
            ++i;
            binary /= 10;
        }
        printf("Decimal = %d\n", decimal);
    } else {
        int decimal, binary[32], i = 0;
        printf("Enter decimal number: ");
        scanf("%d", &decimal);
        while (decimal > 0) {
            binary[i] = decimal % 2;
            decimal /= 2;
            i++;
        }
        printf("Binary = ");
        for (int j = i - 1; j >= 0; j--)
            printf("%d", binary[j]);
        printf("\n");
    }

    return 0;
}
