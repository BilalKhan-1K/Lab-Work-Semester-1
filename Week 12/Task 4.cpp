#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *source, *target;
    char ch;

    source = fopen("students.txt", "r");
    if (source == NULL) {
        printf("Error: Could not open 'students.txt'\n");
        return 1;
    }

    target = fopen("students uppercase.txt", "w");
    if (target == NULL) {
        printf("Error: Could not create 'students uppercase.txt'\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(toupper(ch), target);
    }

    fclose(source);
    fclose(target);

    printf("Content converted to uppercase and saved in 'students uppercase.txt'\n");
    return 0;
}

