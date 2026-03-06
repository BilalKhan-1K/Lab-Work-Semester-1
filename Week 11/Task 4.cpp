#include <stdio.h>
#include <string.h>

struct Employee {
    char name[25];
    int age;
    int basic;
    float totalSalary;
};

int main() {
    struct Employee emp[5], temp;
    int i, j;

    for(i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Age: ");
        scanf("%d", &emp[i].age);

        printf("Basic Salary: ");
        scanf("%d", &emp[i].basic);

        float da = 0.10 * emp[i].basic;
        float hra = 0.05 * emp[i].basic;

        emp[i].totalSalary = emp[i].basic + da + hra;
    }

    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(emp[i].totalSalary < emp[j].totalSalary) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    printf("\n--- Employee Salary Rankings ---\n");
    for(i = 0; i < 5; i++) {
        printf("Name: %s\n", emp[i].name);
        printf("Age: %d\n", emp[i].age);
        printf("Total Salary: %.2f\n\n", emp[i].totalSalary);
    }

    return 0;
}
