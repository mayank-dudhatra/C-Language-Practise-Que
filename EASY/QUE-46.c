// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
  
  char string[] = "helo";
  int repeat = -1;
  int len = strlen(string);
  
  for(int i=0;i<len;i++)
      for (int j=i+1;j<len;j++){
      if(string[i] == string[j]){
         repeat = string[i];
          printf("%d",i);

      }
      
  }
if(repeat!=-1){
    
}
else{
    printf("%d",repeat);
}

    return 0;
}