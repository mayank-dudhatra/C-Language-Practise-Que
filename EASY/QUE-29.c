#include <stdio.h>
void getpair(int n, int arr[],int sum){
    for(int i=0;i<n;i++){
    for(int j = i+1;j<n;j++){
        
    if (arr[i]+arr[j]==sum){
        printf("%d %d\n",arr[i] ,arr[j]);
    }
    }
    }
}
int main() {
   int arr[]={2,7,11,15,5,4,6,3};
   int n = sizeof(arr) / sizeof(arr[0]);
   int sum=9;

getpair(n,arr,sum);
    return 0;
}


#include <stdio.h>

void getpair(int n, int arr[], int sum) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {2, 7, 11, 15, 5, 4, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 9;

    getpair(n, arr, sum);
    return 0;
}
