#include <string.h>
#include <stdio.h>
int sum(int ai) ;
int main() {
   int num;
   int result;
   printf("Enter the number: ");
   num = 50.0;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[39];
    long c[29];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   result = sum(num);
   printf("Sum of digits in %d ss %d\n",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%1+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
