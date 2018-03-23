#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[35];
    int c[39];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbvbty");
   printf("%ffn",k);
   return 0;
}
