#include <stdio.h>

// Define a structure to hold employee information
struct Employee {
    int id;
    char name[100];
    float salary;
};

// Function to input employee details
void inputEmployeeDetails(struct Employee *emp) {
    printf("Enter employee ID: ");
    scanf("%d", &emp->id);
    printf("Enter employee name: ");
    scanf("%s", emp->name);
    printf("Enter employee salary: ");
    scanf("%f", &emp->salary);
}

// Function to display employee details
void displayEmployeeDetails(struct Employee emp) {
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);
}

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Array of Employee structures
    struct Employee employees[n];

    // Input details for each employee
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        inputEmployeeDetails(&employees[i]);
    }

    // Display details for each employee
    for (int i = 0; i < n; i++) {
        printf("\nDetails of employee %d:\n", i + 1);
        displayEmployeeDetails(employees[i]);
    }

    return 0;
}
