#include <stdio.h>
int main(){
    int year;

    printf("Enter the Year :");
    scanf("&d",&year);

    if(year%100 == 0){
        printf("The Year is Century Year");
    }
    else{
                printf("The Year is not Century Year");

    }
}