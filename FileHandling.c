#include <stdio.h>

int main() {
    FILE *fp;

    // Open file in append mode
    fp = fopen("dummy.txt", "a");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write into the file
    fprintf(fp, "Hello class 07 Feb\n");

    // Close the file
    fclose(fp);

    printf("Data written successfully.\n");

    return 0;
}