// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct profile{
  char  Name[50];
  int Age;
  char City[50];
};

int main() {
    
    struct profile detail[2];
    
    strcpy(detail[0].Name,"Alice");
    detail[0].Age=30;
    strcpy(detail[0].City,"New York");
    
    strcpy(detail[1].Name,"John");
    detail[1].Age=25;
    strcpy(detail[1].City,"Oval");
    
    for(int i=0;i<2;i++){
        printf("Name : %s\n",detail[i].Name);
        printf("Age : %d\n",detail[i].Age);
        printf("City : %s\n",detail[i].City);
        printf("\n");

    }

    
    return 0;
}