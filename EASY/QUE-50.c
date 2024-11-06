#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    char ch = 'o';
    
    int len = strlen(str);
    int count = 0;
    
    for(int i=1;i<len;i++){
        if (str[i] == ch){
            count++;
        }
    }
    printf("The Character Repeat in a String %d Times.",count);
    return 0;
}