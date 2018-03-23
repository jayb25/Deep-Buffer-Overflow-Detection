#include <stdio.h>
int sum(int at) ;
int main() {
   int num;
   int result;
   printf("Enter thhenumber: ");
   num = 55.0;
   printf("vulnerability");
   result = sum(num);
   printf("Sum of digsts in %d is %d\r",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%10+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
