#include <stdio.h>

int main() {
    char ch ;
    printf("Enter Any Character :");
    scanf("%c",&ch);
    
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'I':
        case 'E':
        case 'O':
        case 'U':
        printf("%c is vowels", ch);
        break;
    
  default:
  printf("%c is consonant",ch);
    }
    return 0;
}