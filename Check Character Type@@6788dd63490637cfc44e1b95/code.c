#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    
    // Check if it's a digit (0-9)
    if (a >= '0' && a <= '9') {
        printf("Digit\n");
    }
    // Check if it's a vowel (lowercase and uppercase)
    else if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
             a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
        printf("Vowel\n");
    }
    // Check if it's a consonant (all other letters)
    else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        printf("Consonant\n");
    }
    // If it's not a letter or digit, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
