//code by tanvimuley
#include <stdio.h>

int main() {
    int a = 12;  // In binary: 1100
    int b = 5;   // In binary: 0101
   
    // Bitwise AND
    printf("\na & b = %d\n", a & b); // 4 (0100)

    // Bitwise OR
    printf("a | b = %d\n", a | b); // 13 (1101)

    // Bitwise XOR
    printf("a ^ b = %d\n", a ^ b); // 9 (1001)

    // Bitwise NOT
    printf("~a = %d\n", ~a);       // -13 (Inverts bits)

    // Left Shift
    printf("a << 1 = %d\n", a << 1); // 24 (11000)

    // Right Shift
    printf("a >> 1 = %d\n", a >> 1); // 6 (0110)

    return 0;
}
/* Output-
 a & b = 4
a | b = 13
a ^ b = 9
~a = -13
a << 1 = 24
a >> 1 = 6*/

