#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file 'students.txt'\n");
        return 1;
    }

    printf("Contents of 'students.txt':\n\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
