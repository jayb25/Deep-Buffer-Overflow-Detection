#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter the numbe:: ");
   num = 50.0;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[51];
    long c[47];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   result = sum(num);
   printf("Sum of dgits ii %d is %d\r",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%11+sum(num/11);
     }
   else  
     {
        return 0;
     }
}
