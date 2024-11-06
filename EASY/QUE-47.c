#include <stdio.h>

int main() {
    int arr[] = {10,4,3,5,6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int repeat = -1;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i] == arr[j]){
                repeat = arr[i];
                break;
            }
          
        }
        if(repeat != -1){
            break;
        }
    }
    if (repeat != -1){
        printf("The First Repeating Element is %d",repeat);
    }
    else{
        printf("%d",repeat);
    }
   
}




//Using Function
#include <stdio.h>

int firstRepeatingElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];  
            }
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = firstRepeatingElement(arr, n);

    if (result != -1) {
        printf("The first repeating element is: %d\n", result);
    } else {
        printf("No repeating elements found\n");
    }

    return 0;
}