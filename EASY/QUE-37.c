#include <stdio.h>

int main() {
 int arr[] = {1,2,2,3,4,5,8,8,8,7,7,9};
int size = sizeof(arr) / sizeof(arr[0]);
int target = 8;
int count = 0;
int start;

for(int i=0;i<=size;i++){
    if(arr[i] == target){
        if (count = 0){
        start = i;
     
    }
    }
    count++;
}
 int end = start + count-1;
 printf("%d"  "%d",start,end);
    return 0;
}













#include <stdio.h>

void findFirstAndLast(int arr[], int n, int x) {
    int first = -1, last = -1;  // Initialize first and last indices

    for (int i = 0; i < n; i++) {
        if (x != arr[i])
            continue;  // Skip if current element is not equal to x
        
        if (first == -1)  // First occurrence found
            first = i;
        
        last = i;  // Update last occurrence
    }

    // Check if the target was found
    if (first != -1)
        printf("First Occurrence = %d\nLast Occurrence = %d\n", first, last);
    else
        printf("Not Found\n");
}

// Driver code
int main() {
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(int);  // Calculate the number of elements in the array
    int x = 8;  // Target value to search for
    findFirstAndLast(arr, n, x);  // Call the function
    return 0;
}
