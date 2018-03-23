#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Enter the numbe:: ");
   num = 50.0;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[45];
    long c[16];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
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
