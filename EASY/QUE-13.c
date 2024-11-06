#include <stdio.h>

int main() {
	
	int arr[] = {1 , 2 , 3 , 4} ;
	int count = 0 ;
	int number = 3 ;
	int len = sizeof (arr) / sizeof (arr[0]) ;
	
	int i ;
	for (i = 0 ; i < len ; i++ ) {
		if (arr[i] == number) {
		count = count + 1 ;
	}
		else {
			count = count ;
		}
	}
	if (count > 0) {
		printf ("True") ;
	}
	else {
	printf ("False") ;
	}
	
	return 0 ;
}