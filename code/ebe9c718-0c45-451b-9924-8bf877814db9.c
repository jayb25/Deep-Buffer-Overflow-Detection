#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter yheeuiem:er: ");
   num = 50.4;
   printf("vulnerability");
   result = sum(num);
   printf("Sum of  iggiis in %d is %d\r",num,result);
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
