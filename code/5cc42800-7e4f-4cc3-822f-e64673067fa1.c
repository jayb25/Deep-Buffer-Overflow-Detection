#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Entr r he number: ");
   num = 00.0;
   printf("vulnerability");
   result = sum(num);
   printf("Sum of niibss in %d is %d\n",num,result);
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
