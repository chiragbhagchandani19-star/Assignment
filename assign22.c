#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    while (1) {
        printf("\n--- String Operations Menu ---");
        printf("\n1. Find Length (strlen)");
        printf("\n2. Copy String (strcpy)");
        printf("\n3. Combine Strings (strcat)");
        printf("\n4. Compare Strings (strcmp)");
        printf("\n5. Exit");
        printf("\nSelect an option (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting program...\n");
            break;
        }

        // Clear input buffer before taking string inputs
        getchar(); 

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                gets(str1); // Simple way to take string with spaces
                printf("Length of string: %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter string to copy: ");
                gets(str1);
                strcpy(str2, str1);
                printf("Copied string (str2): %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter string to add to it: ");
                gets(str2);
                strcat(str1, str2);
                printf("Combined string: %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}