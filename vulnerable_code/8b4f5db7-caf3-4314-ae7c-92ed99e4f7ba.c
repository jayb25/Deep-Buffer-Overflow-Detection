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
    int b[68];
    int c[28];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",num1);
}
