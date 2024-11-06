// Online C compiler to run C program online
#include <stdio.h>
int sum(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else {
        return n + sum(n-1);
    }
}
int main() {
   int num ;
   printf("Enter Any Number :");
   scanf("%d",&num);
   
   int result = sum(num);
   printf("The sum of Number is %d",result);

    return 0;
}   