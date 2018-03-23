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
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[92];
    int c[6];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",num1);
}
