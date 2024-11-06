#include <stdio.h>

int main() {
	
	int arr[5] = {1 , 2 , 3 , 4} ;
	int len = sizeof(arr) / sizeof(arr[0]);
	
	for(int i=len-1;i>=0;i--){
	    arr[i]=arr[i-1];
	}
	arr[0]=9;
	for(int j=0;j<len;j++){
	    printf("%d",arr[j]);
	}
	return 0 ;
}