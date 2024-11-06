#include <stdio.h>
void largestnum(int num1, int num2){
    if (num1>num2){
        printf("The Largest Number is:  %d\n", num1);
    }
    else if(num2>num1){
        printf("The Largest Number is:  %d\n", num2);
    }
    else{
        printf("Both Number are equal: %d", num1);
    }
}

int main() {
    int a,b;
    
printf("Enter the First Number:");
scanf("%d",&a);

printf("Enter the Second Number:");
scanf("%d",&b);

largestnum(a,b);
    return 0;
}