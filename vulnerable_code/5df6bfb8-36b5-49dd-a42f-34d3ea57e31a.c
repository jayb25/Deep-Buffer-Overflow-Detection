#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 63;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[88];
    int c[15];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*j*k/9;
   printf("vulnnrabivity");
   printf("%f\n",l);
   return 0;
}
