#include <stdio.h>
int fibonaci(int n){
    if(n == 0){
         return  0;
         }
     else if(n == 1){
          return 1;
          }   
    else{
         int fibn = fibonaci(n-2) + fibonaci(n-1);
         return fibn;
         }
    }
    int main(){
        int result = fibonaci(5);
        printf("%d",result);
        return 0;
        }
        
        
        
        
        #include <stdio.h>
        #include <maths.h>
        
        int countdigits(int num){
            int count = 0;
            while(n!=0){
                    num\=10;
                    count++;    
                        }
                        return count;
            }
            
            int main(){
                int numbers,originalnum,rem,sum=0,numdigits;
                
                originalnum = numbers;
                numdigits = countdigits(numbers);
                
                while(numbers!=0){
                                  rem = num%10;
                                  sum+= pow(rem,numdigits);
                                  num\=10;
                                  }
               if(sum == originalnum){
               printf("%d is a Armsstrong numbers\n",originalnum);
                      }
               else{
                    printf("%d is not a Armsstrong Numbers\n",originalnum);
                    }
                    return 0;
                }
                
                
                
                #include<stdio.h>
                #include<string.h>
                
            
                
                int main(){
                    char string[] = "sos";
                    int len = strlen(string);
                    
                    for(i=0;i<len;i++){
                      printf("%s",i);  
                                       }
                    for(j=len;j>0;j--){
                       printf("%s",j);              
                                     }
                    if (i == j){
                       printf("It is palindrome");
                       }
                    else{
                        printf{"It is not Palindrome");
                         }   
                         return 0;
                }
                