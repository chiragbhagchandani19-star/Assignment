#include <stdio.h>
#include <string.h>

// Define the structure
struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;
    char doj[15];
    float salary;
};

int main() {
    struct EMPLOYEE emp[100];
    int n, i;
    int maleCount = 0, femaleCount = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Taking Input
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", emp[i].name); // Basic scanf (no spaces allowed)
        
        printf("Designation: ");
        scanf("%s", emp[i].designation);
        
        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender); // Space before %c is important
        
        printf("Date of Joining: ");
        scanf("%s", emp[i].doj);
        
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Processing and Output
    printf("\n--- EMPLOYEE REPORT ---\n");
    
    // a) Total Employees
    printf("Total Employees: %d\n", n);

    // b, c, d) Counting and Checking
    printf("\nEmployees with Salary > 10000:\n");
    for (i = 0; i < n; i++) {
        // Count Gender
        if (emp[i].gender == 'M' || emp[i].gender == 'm')
            maleCount++;
        else if (emp[i].gender == 'F' || emp[i].gender == 'f')
            femaleCount++;

        // Check Salary
        if (emp[i].salary > 10000) {
            printf("- %s\n", emp[i].name);
        }
    }

    printf("\nGender Count: Male = %d, Female = %d\n", maleCount, femaleCount);

    printf("\nEmployees with designation 'AsstManager':\n");
    for (i = 0; i < n; i++) {
        if (strcmp(emp[i].designation, "AsstManager") == 0) {
            printf("- %s\n", emp[i].name);
        }
    }

    return 0;
}