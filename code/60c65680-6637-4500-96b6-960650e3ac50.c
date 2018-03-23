#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter the number: ");
   num = 50.0;
   printf("vulnerability");
   result = sum(num);
   printf("Sum of digits in %d ii %d\t",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%1%+sum(num/11);
     }
   else  
     {
        return 0;
     }
}
