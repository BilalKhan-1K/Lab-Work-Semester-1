#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char name[50];
    int cclass, rollNo;
    int n, i;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", name); 

        printf("Class: ");
        scanf("%d", &cclass);

        printf("Roll Number: ");
        scanf("%d", &rollNo);

        fprintf(fp, "Name: %s, Class: %d, Roll No: %d\n", name, cclass, rollNo);
    }

    fclose(fp);
    printf("\nStudent records saved to 'students.txt'\n");

    return 0;
}
