#include <stdio.h>

unsigned int swapConsecutiveBits(unsigned int x) {
    // Mask to extract odd-positioned bits
    unsigned int oddMask = 0xAAAAAAAA;
    // Mask to extract even-positioned bits
    unsigned int evenMask = 0x55555555;

    // Extract odd and even bits
    unsigned int oddBits = x & oddMask;
    unsigned int evenBits = x & evenMask;

    // Right shift odd bits and left shift even bits to interchange positions
    oddBits >>= 1;
    evenBits <<= 1;

    // Combine the swapped bits
    return oddBits | evenBits;
}

int main() {
    unsigned int x = 0xBFFEA901;
    unsigned int result = swapConsecutiveBits(x);

    printf("Original: %08X\n", x);
    printf("Swapped : %08X\n", result);

    return 0;
}
