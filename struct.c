#include <stdio.h>

// Define the structure for Employee
struct Employee {
    int id;            // Employee ID (integer)
    char name[50];     // Employee name (string)
    double salary;     // Employee salary (floating point)
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee name: ");
    // Use space before %49[^\n] to consume any leftover newline character
    scanf(" %49[^\n]", emp.name);

    printf("Enter employee salary: ");
    scanf("%lf", &emp.salary);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2lf\n", emp.salary);

    return 0;
}

