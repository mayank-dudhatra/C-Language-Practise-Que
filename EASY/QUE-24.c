#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "He      l    l   o";
    int len = strlen(str); 
    printf("%s\n", str); // To check the string
    
    for(int i=0;i<len;i++){
        if (!(str[i] == 32)){
            printf("%c",str[i]);
        }
    }
    return 0;
}
