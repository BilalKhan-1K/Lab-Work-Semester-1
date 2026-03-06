#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    int N, i, j;
    struct Student temp;

    printf("Enter the number of students: ");
    scanf("%d", &N);

    struct Student students[N];

    for(i = 0; i < N; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    for(i = 0; i < N - 1; i++) {
        for(j = i + 1; j < N; j++) {
            if(students[i].marks < students[j].marks) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\n--- Student Rankings ---\n");
    for(i = 0; i < N; i++) {
        printf("Rank %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
