#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    float first_num;
    float second_num;
    bool accepted_value = false;
    char choice = 'y';

    while (1) {
        accepted_value = false;
        if (choice == 'n') {
            printf("Goodbye!");
            break;
        }

        // acquire first number and second number (both float)
        printf("First number: ");
        scanf("%f", &first_num);
        printf("Second number: ");
        scanf("%f", &second_num);

       // acquire sum, difference, product, and quotient
       printf("Sum: %.2f\n", first_num + second_num);
       printf("Difference: %.2f\n", first_num - second_num);
       printf("Product: %.2f\n", first_num * second_num);
       
       if (second_num == 0) {
            printf("Error: Cannot divide by zero\n");
       } else {
            printf("Quotient: %.2f\n", first_num /  second_num);
       }

       while (!accepted_value) {
            printf("Continue? (y/n) ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'n') {
                accepted_value = true;
            }
       }
    }
}