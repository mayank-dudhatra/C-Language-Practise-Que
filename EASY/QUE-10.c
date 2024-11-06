#include <stdio.h>

int main() {
   int arr[] = {1,2,3,4,5};
   int arrlen = sizeof(arr) / sizeof(arr[0]);
   int evencount=0,i=0,oddcount=0;
   
   for(i=0;i<arrlen;i++){
       if(arr[i]%2==0){
           evencount++;
       }
       else{
           oddcount++;
       }
   }
printf("even %d\n", evencount); 
printf("odd %d\n", oddcount);
    return 0;
}