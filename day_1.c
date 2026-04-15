#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char name[100];
    char choice = '\0';
    bool accepted_value = false;

    while (1) {
        if (choice == 'n') {
                printf("Goodbye!");
                break;
        }

        printf("Hello user, may I ask what is your name?\n");
        scanf("%s", name);
        printf("So [%s] is your name. Interesting!\n\n", name);
        accepted_value = false;

        while (accepted_value == false) {
                printf("Continue? (strictly y/n)");
                scanf(" %c", &choice);
                if (choice == 'y' || choice == 'n') {
                        accepted_value = true;
                        break;
                }
        }
    }
    return 0;
}
