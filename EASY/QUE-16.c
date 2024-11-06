#include <stdio.h>

int main() {
	
	int arr[] = {1,2,3,4,5};
	int count=0;
	int len = sizeof(arr) / sizeof(arr[0]);
	
	for(int i=0;i<len;i++){
	    if(arr[i]<0){
	        count=1;
	    }
	}
	if(count=0){
	    printf("False");
	}
	else{
	    printf("True");
	}
}