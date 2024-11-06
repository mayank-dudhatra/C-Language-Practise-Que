#include <stdio.h>

int main() {
    int option, number;

    printf("Menu:\n");
    printf("1. Check Even/Odd\n");
    printf("2. Exit\n");
    
    printf("Enter option: ");
    scanf("%d", &option);
    
    switch (option) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &number);
            
            switch (number % 2) {
                case 0:
                    printf("%d is even.\n", number);
                    break;
                case 1:
                    printf("%d is odd.\n", number);
                    break;
            }
            break;

        case 2:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid option. Please try again.\n");
    }

    return 0;
}








#include <stdio.h>

int main() {
    int option, number;

    printf("Menu:\n");
    printf("1. Check Even/Odd\n");
    printf("2. Exit\n");


    printf("Enter option: ");
    scanf("%d", &option);

    switch (option) {
        case 1:

            printf("Enter a number: ");
            scanf("%d", &number);


            if (number % 2 == 0) {
                printf("%d is even.\n", number);
            } else {
                printf("%d is odd.\n", number);
            }
            break;
        case 2:

            printf("Exiting program.\n");
            break;
            
        default:
            printf("Invalid option. Please try again.\n");
    }

    return 0;
}
