#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int bits = sizeof(int) * 8;  // Get total bits in an integer (usually 32)
    int msb = 1 << (bits - 1);   // Left shift 1 to the MSB position

    if (num & msb) {
        printf("MSB is set (1)\n");
    } else {
        printf("MSB is not set (0)\n");
    }

    return 0;
}
