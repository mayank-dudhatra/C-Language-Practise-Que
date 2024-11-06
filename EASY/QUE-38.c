#include <stdio.h>

int main() {
   float celsius;
   printf("Enter Temperature in Celsius :");
   scanf("%f",&celsius);
   
   float fahrenite = 32 + (9.0/5.0)*celsius ;
   printf("The Temperature in Fahrenite is %.2f",fahrenite);
    return 0;
}