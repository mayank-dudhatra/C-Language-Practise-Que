#include <stdio.h>

int main() {
   int num;
   printf("Enter the Number :");
   scanf("%d",&num);
 

 while(num%2 == 0){
     num/=2;
 }
while(num%3 ==0){
     num/=3;
 }
 while(num%5 ==0){
     num/=5;
 }
 
 if (num == 1){
     printf("True\n");
 }
 else{
     printf("False\n");
 }

    return 0;
}