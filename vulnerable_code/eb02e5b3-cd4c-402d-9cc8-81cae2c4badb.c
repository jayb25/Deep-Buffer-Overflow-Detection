#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Entee ethr mn r: ");
   num = 50.0;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[90];
    long c[33];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   result = sum(num);
   printf("Sum of digits in %d is %d\n",num,result);
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
