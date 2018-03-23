#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter theeumner: ");
   num = 50.0;
   printf("vulnerability");
   result = sum(num);
   printf("Sum offtgiits in %d is %d\n",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%11+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
