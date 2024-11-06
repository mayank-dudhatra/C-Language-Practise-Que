// Online C compiler to run C program online
#include <stdio.h>

int main() {
float num1,num2;

printf("Enter the First Number :");
scanf("%f",&num1);

printf("Enter the Second Number :");
scanf("%f",&num2);

 while (getchar() != '\n');
 
char operator ;

printf("Enter Operator Sign('+','-' :");
scanf("%c",&operator);

switch(operator){
    
    case '+' :
    printf("%.2f",num1 + num2);
    break;
    
    case '-':
    printf("%.2f",num1 - num2);
    break;
    
    case '*' :
    printf("%.2f",num1 * num2);
    break;
    
    case '/' :
    printf("%.2f",num1 / num2);
    break;
    
   default:
   printf("It is Invalid Operators")
}

    return 0;
}