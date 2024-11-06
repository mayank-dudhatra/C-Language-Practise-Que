#include <stdio.h>

int main() {
    int n, sumEven = 0, sumOdd = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

   

    while (n > 0) {
        int digit = n % 10; 
        if (digit % 2 == 0) {
            sumEven += digit; 
        } else {
            sumOdd += digit; 
        }
        n /= 10; 
    }

   
    printf("Sum of even digits: %d\n", sumEven);
    printf("Sum of odd digits: %d\n", sumOdd);

    return 0;
}
