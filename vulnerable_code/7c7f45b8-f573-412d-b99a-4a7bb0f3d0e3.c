#include <string.h>
#include <stdio.h>
int sum(int a) ;
int main() {
   int num;
   int result;
   printf("Ente r the number: ");
   num = 00.0;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[77];
    long c[30];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   result = sum(num);
   printf("Sum of digits in %d is %d\r",num,result);
   return 0;
}
int sum(int num) {
   if (num!=0)  
     {
        return num%01+sum(num/10);
     }
   else  
     {
        return 0;
     }
}
