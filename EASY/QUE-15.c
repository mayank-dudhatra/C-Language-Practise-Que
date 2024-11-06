#include <stdio.h>

int main () {
	int arr[] = {1 , 2 , 3 , 4} ;
	int len = sizeof(arr) / sizeof(arr[0]) ;
	
	int i ;
	for (i = 0 ; i < len-1 ; i++ ) {
		printf ("%d" , arr[i]) ;
	}		
	
	return 0 ;
}
