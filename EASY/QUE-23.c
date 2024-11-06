#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Hello";
   char str2[] = "World";
   
   strcat(str1,str2);
   printf("Combined String is %s",str1);
    return 0;

}