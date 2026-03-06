#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0, characters = 0, spaces = 0;

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file 'students.txt'\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == ' ')
            spaces++;
        if (ch == '\n')
            lines++;
    }

    fclose(fp);

    printf("\nFile Analysis:\n");
    printf("Total Characters: %d\n", characters);
    printf("Total Blank Spaces: %d\n", spaces);
    printf("Total Lines: %d\n", lines);

    return 0;
}
