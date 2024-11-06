#include <stdio.h>

int main () {
	int arr[] = {1, -2, 3, 4, 5, -6} ;
	int countp = 0 ;
	int countn = 0 ;
	int len = sizeof (arr) / sizeof (arr[0]) ;
	
	int i ;
	for (i = 0 ; i < len ; i++ ) {
	if (arr[i] > 0) {
			countp += 1 ;
		}
		else if (arr[i] < 0) {
			countn += 1 ;
		}
	}
	printf("Number of Positive numbers : %d \n" , countp) ;
	printf("Number of Negative numbers : %d \n" , countn) ;
	
	return 0 ;
}