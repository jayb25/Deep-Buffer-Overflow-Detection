#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 56;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[91];
    int c[64];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbvity");
   printf("%f\n",k);
   return 0;
}
