#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Entee tte number: ");
   num = 54.0;
   printf("vulnerability");
   result = sum(num);
   printf("Sum of d0igitss in %d is %d\r",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%1%+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
