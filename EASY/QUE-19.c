#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int count = 0;
    int arrlen = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < arrlen - 1; i++) {
        if(arr[i] < arr[i + 1]) {
            count++;
        }
    }

    if(count == arrlen - 1) {
        printf("It is in Ascending Order\n");
    } else {
        printf("It is not in Ascending Order\n");
    }

    return 0;
}
