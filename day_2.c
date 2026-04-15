#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sen[201];
    int total_char = 0;
    int letters_count = 0;
    int digits_count = 0;
    int spaces_count = 0;
    int special_count = 0;

    char uppercase[201];
    char lowecase[201];
    char titlecase[201];

    printf("Enter a sentence: ");
    fgets(sen, 201, stdin);
    sen[strcspn(sen, "\n")] = '\0';

    for (int i = 0; sen[i] != '\0'; i++) {
        if (isalpha(sen[i])) { // check if a character is a letter
            total_char = total_char + 1;
            letters_count = letters_count + 1;
        } else if (isdigit(sen[i])) { // check if a character is a digit
            digits_count = digits_count + 1;
        } else if (sen[i] == ' ') { // check if a character is a space
            spaces_count = spaces_count + 1;
        } else {
            special_count = special_count + 1;
        }
    }

    printf("Uppercase: ");
    for (int i = 0; sen[i] != '\0'; i++) { // start of uppercase
        putchar(toupper(sen[i]));
    }
    putchar('\n'); // end of uppercase

    printf("Lowercase: ");
    for (int i = 0; sen[i] != '\0'; i++) { // start of lowercase
        putchar(tolower(sen[i]));
    }
    putchar('\n'); // end of lowercase

    printf("Title Case: ");
    for (int i = 0; sen[i] != '\0'; i++) { // start of title case
        if (i == 0) {
            putchar(toupper(sen[i]));
        } else if (sen[i] == ' ') {
            putchar(sen[i]);
            i = i + 1;
            continue;
        } else {
            putchar(sen[i]);
        }
    }
    putchar('\n'); // end of title case

    printf("Total Character Count: %d\n", total_char);
    printf("Total Letters Count: %d\n", letters_count);
    printf("Total Spaces Count: %d\n", spaces_count);
    printf("Total Special Count: %d\n", special_count);

    return 0;
}
