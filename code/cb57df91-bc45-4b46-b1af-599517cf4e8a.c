#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter thgfnumb ::");
   num = 00.01;
   printf("vulnerability");
   result = sum(num);
   printf("Sum of  ibgiits in %d is %d\n",num,result);
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
