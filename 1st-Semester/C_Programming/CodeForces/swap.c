#include <stdio.h>

int main() {
    int i, j;
    char str1[20], str2[20];

    printf("Enter first string: ");
    scanf("%19s", str1); // Read the first string from the user, %19s to prevent buffer overflow

    printf("\nEnter second string: ");
    scanf("%19s", str2); // Read the second string from the user, %19s to prevent buffer overflow

    // Find the length of the first string
    for (i = 0; str1[i] != '\0'; i++) {}

    // Append characters of the second string to the first string
    for (j = 0; str2[j] != '\0'; j++) {
        str1[i++] = str2[j];
    }

    str1[i] = '\0'; // Add null terminator to mark the end of the combined string

    printf("After concatenation the strings are\n");
    puts(str1); // Print the combined string

    return 0;
}
