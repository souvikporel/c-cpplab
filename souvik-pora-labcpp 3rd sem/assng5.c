//Write a program to copy, concatenate and compare two string without using string.h
//ans:-
#include <stdio.h>


void copyString(char* destination, const char* source) {
    while (*source) {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0'; 
}


void concatenateString(char* destination, const char* source) {
    while (*destination) {
        destination++;
    }
    while (*source) {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0'; 
}


int compareString(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

int main() {
    char str1[100], str2[100], str3[200];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0'; 
    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0'; 
    
    copyString(str3, str1);
    printf("Copied string: %s\n", str3);

    
    concatenateString(str1, str2);
    printf("Concatenated string: %s\n", str1);

    
    int result = compareString(str1, str2);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("First string is less than second string.\n");
    } else {
        printf("First string is greater than second string.\n");
    }

    return 0;
}
