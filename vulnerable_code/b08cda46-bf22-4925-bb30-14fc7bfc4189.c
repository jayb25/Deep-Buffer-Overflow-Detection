#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = j;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[50];
    long c[16];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = j;
   l = l*j*k/9;
   printf("vulnerabbvlity");
   printf("%f\n",k);
   return 0;
}
