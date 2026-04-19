#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200], subStr[200];
    int len, i, isPalindrome = 1;

    // Accept the main string from the user
    // We use fgets instead of scanf to allow spaces in the string
    printf("Enter the main string: ");
    fgets(str1, sizeof(str1), stdin);
    
    // fgets captures the 'Enter' key as a newline character (\n). 
    // This line replaces the newline with a null terminator (\0).
    str1[strcspn(str1, "\n")] = 0; 

    // ---------------------------------------------------------
    // i) Calculate length of string
    // ---------------------------------------------------------
    len = strlen(str1);
    printf("\n--- i) String Length ---\n");
    printf("Length of the string is: %d\n", len);

    // ---------------------------------------------------------
    // ii) String reversal
    // ---------------------------------------------------------
    printf("\n--- ii) String Reversal ---\n");
    printf("Reversed string: ");
    // Loop backwards from the last character index (len - 1) down to 0
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }
    printf("\n");

    // ---------------------------------------------------------
    // iv) Check palindrome
    // ---------------------------------------------------------
    // Note: Checking this before equality keeps focus on the first string
    printf("\n--- iv) Check Palindrome ---\n");
    for (i = 0; i < len / 2; i++) {
        // Compare the first and last characters, moving inwards
        if (str1[i] != str1[len - 1 - i]) {
            isPalindrome = 0; // Set flag to false if a mismatch is found
            break;
        }
    }
    
    if (isPalindrome) {
        printf("The string \"%s\" IS a palindrome.\n", str1);
    } else {
        printf("The string \"%s\" is NOT a palindrome.\n", str1);
    }

    // ---------------------------------------------------------
    // iii) Equality check of two strings
    // ---------------------------------------------------------
    printf("\n--- iii) String Equality Check ---\n");
    printf("Enter a second string to compare: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    // strcmp returns 0 if both strings are exactly the same
    if (strcmp(str1, str2) == 0) {
        printf("The two strings are EQUAL.\n");
    } else {
        printf("The two strings are NOT EQUAL.\n");
    }

    // ---------------------------------------------------------
    // v) Check substring
    // ---------------------------------------------------------
    printf("\n--- v) Check Substring ---\n");
    printf("Enter a string to search for (substring): ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = 0;

    // strstr returns a pointer to the first occurrence, or NULL if not found
    if (strstr(str1, subStr) != NULL) {
        printf("The substring \"%s\" is FOUND in the main string.\n", subStr);
    } else {
        printf("The substring \"%s\" is NOT FOUND in the main string.\n", subStr);
    }

    printf("\n");
    return 0;
}