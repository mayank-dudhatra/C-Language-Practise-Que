#include <stdio.h>

int main() {
int arr[3][4] = { {12, 45, 67, 23},{34, 78, 56, 90}, {11, 43, 29, 65} };
 int max = arr[0][0];
 
 for(int i = 0;i<3;i++){
     for(int j=0;j<4;j++){
         if(max<arr[i][j]){
             max = arr[i][j];
         }
     }
 }
 printf("%d",max);
 
    return 0;
}