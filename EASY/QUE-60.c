#include <stdio.h>

int main() {
   int Day ;
   
   printf("Enter Day of Week :");
   scanf("%d",&Day);
   
   switch(Day){
       case 1:
       printf("Sunday");
       break;
       
       case 2:
       printf("Monday");
       break;
       
       case 3:
       printf("Tuesday");
       break;
       
       case 4:
       printf("Wednesday");
       break;
       
       case 5:
       printf("Thursday");
       break;
       
       case 6:
       printf("Friday");
       break;
       
       case 7:
       printf("Saturday");
       break;
     
     default:
     printf("It is not a day of week");
       
   }

    return 0;
}