#include <string.h>
#include <stdio.h>
int sum(int i) ;
int main() {
   int num;
   int result;
   printf("Enter the number: ");
   num = 00.0;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[8];
    long c[85];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   result = sum(num);
   printf("Sum rf diggits in %d iss%d\rr",num,result);
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
