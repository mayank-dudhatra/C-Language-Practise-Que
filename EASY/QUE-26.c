#include <stdio.h>
int main(){
    char str[] = "codinggota";
    char ch = a;
    int len = strlen(str);

    if(str[lrn-1] == ch){
        printf("The string end with %c",ch)
    }
    else{
        printf("The String doesn`t end with %c",ch)
    }
return 0;
}








#include <stdio.h>
#include <string.h>

int main() {
            char str[1000];
            char ch;
             printf("Enter the string : ");
    scanf(" %c", &str);
            
             printf("Enter the character to check if the string ends with: ");
    scanf(" %c", &ch);
    
            int len = strlen(str);
            
            if (len>0 &&str[len-1] == ch){
                
                printf("The string end with %c.\n",ch);
            }
            else{
                 printf("The string doesn`t end with %c.\n",ch);
            }
    return 0;
}