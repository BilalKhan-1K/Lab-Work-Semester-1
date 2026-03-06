#include <stdio.h>

struct Student {
    char name[50];
    int cclass;
    int rollNo;
    long enrolment;
    float marks;
};

int main() {
    int N, i;

    printf("Enter the number of students: ");
    scanf("%d", &N);

    struct Student students[N];

    for(i = 0; i < N; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name:");
        scanf(" %[^\n]", students[i].name);

        printf("Class:");
        scanf("%d", &students[i].cclass);

        printf("Roll Number:");
        scanf("%d", &students[i].rollNo);

        printf("Enrolment Number:");
        scanf("%ld", &students[i].enrolment);

        printf("Marks:");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Records ---\n");
    for(i = 0; i < N; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name:%s\n", students[i].name);
        printf("Class:%d\n", students[i].cclass);
        printf("Roll Number:%d\n", students[i].rollNo);
        printf("Enrolment Number:%ld\n", students[i].enrolment);
        printf("Marks:%.2f\n", students[i].marks);
    }

    return 0;
}
