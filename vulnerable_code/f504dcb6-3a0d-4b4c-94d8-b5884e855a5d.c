#include <string.h>
#include <stdio.h>
void my_function() ;
int main() {
   my_function();
   return 0;
}
void my_function() {
   int num1=8;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[66];
    long c[71];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",num1);
}
