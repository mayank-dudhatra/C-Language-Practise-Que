// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
printf("Enter The Number Of Element :");
scanf("%d",&n);

int arr[n];
printf("Enter the Element of Array :\n");

for(int i =0;i<n;i++){
scanf("%d",&arr[i]);
}

printf("Enter the Array Index of Two Element that You want to Swap.\n");

int i;
printf("Enter Array Index of First Element :");
scanf("%d",&i);

int j;
printf("Enter Array Index of Second Element :");
scanf("%d",&j);

int temp;

temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;

for(int k=0;k<n;k++){
    printf("%d\n",arr[k]);
}

  
      return 0;
}