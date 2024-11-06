
#include <stdio.h>
 char* digit(int n){
     if (n==0){  return "Zero"; }
    else if(n==1){ return "One"; }
    else if(n==2){  return "Two"; }
    else if(n==3){ return "Three"; }
    else if(n==4){ return "Four"; }
    else if(n==5){ return "Five"; }
    else if(n==6){ return "Six"; }
    else if(n==7){ return "Seven"; }
    else if(n==8){ return "Eight"; }
    else if(n==9){ return "Nine"; }
}

int main() {
   int num;
   printf("Enter the Number between 0 to 9 :");
   scanf("%d",&num);
   
   printf("The %d in word is %s.",num,digit(num));
   

    return 0;
}