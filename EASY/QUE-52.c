#include <stdio.h>

int main() {
    int n;
    printf("Enter the Number of Element : ");
    scanf("%d",&n);
    
    printf("Enter the Number of Array :\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Running Sum of Array is :\n");
int sum =0;
for(int j=0;j<n;j++){
    sum+=arr[j];
    printf("%d\n",sum);
}
    
    return 0;
}