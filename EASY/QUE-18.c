#include<stdio.h>
int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int len = sizeof(arr) / sizeof(arr[0]);

    for(int i=2;i<len;i+=2){
        printf("%d",arr[i]);
    }
    return 0;
}