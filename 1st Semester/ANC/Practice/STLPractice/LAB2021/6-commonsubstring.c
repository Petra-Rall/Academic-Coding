#include <stdio.h>
#include <string.h>

void longest_common_substring(char *str1, char *str2) {
    int m = strlen(str1);
    int n = strlen(str2);
    int result = 0; // To store length of the longest common substring
    int end_index = 0; // To store ending point of longest common substring

    // Traverse both strings and fill LCSuff array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (str1[i] == str2[j]) {
                int len = 0;
                int p = i;
                int q = j;
                while (p < m && q < n && str1[p] == str2[q]) {
                    len++;
                    p++;
                    q++;
                }
                if (len > result) {
                    result = len;
                    end_index = i;
                }
            }
        }
    }

    // If there is no common substring
    if (result == 0) {
        printf("No common substring found\n");
        return;
    }

    // Extracting the longest common substring
    printf("Longest common substring: ");
    for (int i = end_index; i < end_index + result; i++) {
        printf("%c", str1[i]);
    }
    printf("\n");
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    longest_common_substring(str1, str2);

    return 0;
}
