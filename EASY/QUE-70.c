#include <stdio.h>

int main() {
int arr[3][3] = { {1,2,3},{4,5,6}, {7,8,9} };
int sum1=0;
int sum2=0;
int sum3=0;
 for(int i = 0;i<3;i++){
    sum1 = sum1+arr[0][i];
    sum2 = sum2+arr[1][i];
    sum3 = sum3+arr[2][i];
 }
 printf("The sum of First row is :%d\n",sum1);
  printf("The sum of Second row is :%d\n",sum2);
 printf("The sum of third row is :%d\n",sum3);


    return 0;
}