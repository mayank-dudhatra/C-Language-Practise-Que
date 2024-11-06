#include <stdio.h>
#include <math.h>

int main() {
    printf("Menu :\n");
    printf("1. Square of Number.\n");
    printf("2. Cube of Number.\n");
    printf("3. Cubr Root of Number.\n");
    
    int option;
    printf("Enter the Option :");
    scanf("%d",&option);
    
     int num ;
        printf("Enter the Number :");
        scanf("%d",&num);
    
    switch(option){
        
        case 1:
        int square = num*num;
        printf("The Square of %d is  : %d\n",num,square);
        break;
        
        case 2:
        int cube = num*num*num;
        printf("The Cube of %d is : %d\n",num,cube);
        break;
        
        case 3:
        float cuberoot = cbrt(num);
        printf("The Cube Root of %d is : %.2f\n",num,cuberoot);
        break;
        
        default :
        printf("Enter Valid Option");
        break;
        
    }
    
    return 0;
}