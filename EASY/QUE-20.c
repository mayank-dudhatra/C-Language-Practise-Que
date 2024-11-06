#include <stdio.h>

int main() {
   int arr[] = {80,30,70,50,20};
   int min = arr[0];
   int max = arr[0];
   int len = sizeof(arr) / sizeof(arr[0]);
   int i;
   
   for( i=0;i<len;i++){
       if(min>arr[i]){
           min=arr[i];
       }
   }
   
   for( i=0;i<len;i++){
   if (max<arr[i]){
       max=arr[i];
   }
   }
   
   int ans = max - min;
   printf("%d",ans);
    return 0;
}





#include <stdio.h>

int main() {
    int arr[] = {80, 30, 70, 50, 20};
    int min = arr[0];
    int max = arr[0];
    int len = sizeof(arr) / sizeof(arr[0]);
    int i;
    
    // Find minimum value
    for (i = 0; i < len; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    
    // Find maximum value
    for (i = 0; i < len; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    
    // Calculate the difference
    int ans = max - min;
    
    // Print the result
    printf("The difference between max and min is: %d\n", ans);
    
    return 0;
}
