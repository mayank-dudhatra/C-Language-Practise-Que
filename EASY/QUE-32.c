#include <stdio.h>
int main(){
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

if(num<13){
    printf("Child");
}
else if(num>=13 && num<=19){
    printf("Teenager");
}
else if(num>=20 && num<=59){
    printf("Adult");
}
else(num>=60){
    printf("Senior");
}
}