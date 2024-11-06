// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int arr[2] ;
  printf("Enter the  Number: ");
  for (int i=0;i<2;i++){
  scanf("%d",&arr[i]);
}
if (arr[0] <= arr[1]){
for(int j = arr[0];j<=arr[1];j++){
    printf("%d",j);
}
}
else{
    for(int j = arr[0];j>=arr[1];j--){
    printf("%d",j);
}
}
    return 0;
}





#include <stdio.h>
void numberbetween(int num1,int num2){
    if(num1 <= num2){
        for(int i=num1;i<=num2;i++){
            printf("%d",i);
        }
    }
        if(num1 >= num2){
        for(int i=num1;i>=num2;i--){
            printf("%d",i);
        }
    }
}
int main() {
 
    return 0;
}