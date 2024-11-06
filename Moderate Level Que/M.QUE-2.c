#include <stdio.h>
char* clock(float n){
    if (n >= 5.00 && n <= 11.59){
        return "Good Morning";
    }
    else if (n >= 12.00 && n <= 17.59){
        return "Good Afternoon";
    }
    else if (n >= 18.00 && n <= 21.59){
        return "Good Evening";
    }
    else if(n >= 22.00 && n <= 4.59 || n >= 00.00 && n <= 4.59){
        return "Good Night";
    }
    else {
        return "Invalid Time";
    }
}
int main() {
  float time;
  printf("Enter the Time :");
  scanf("%f",&time);
  
  printf("%s",clock(time));
     return 0;
}