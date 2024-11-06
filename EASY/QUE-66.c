// Online C compiler to run C program online
#include <stdio.h>
int gcd(int a,int b){
    if (b == 0){
        return a;
    }
    return gcd(b,a%b);
}
int lcm(int a,int b){
     return (a*b) / gcd(a,b);
}

int main() {
   int a = 10;
   int b = 15;
   int result = lcm(a,b);
   printf("%d",result);

    return 0;
}