#include <stdio.h>

int main() {
    int i;
    char j;
    FILE *fp;
    
    // Open "out.txt" file for writing
    fp = fopen("out.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    
    // Generate and write 100 random integers to the file
    for (i = 1; i <= 100; i++)
        fprintf(fp, "%d\n", i);
    
    // Close the file
    fclose(fp);
    
    // Open "out.txt" file for reading
    fp = fopen("out.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    
    // Read each character from the file and print to console
    while ((j = getc(fp)) != EOF)
        printf("%c", j);
    
    // Close the file
    fclose(fp);
    
    return 0;
}
