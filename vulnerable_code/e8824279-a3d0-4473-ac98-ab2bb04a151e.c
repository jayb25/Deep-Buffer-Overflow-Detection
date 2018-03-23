#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = l;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[57];
    long c[93];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   k = j;
   l = i*j*k/9;
   printf("vulnerabivity");
   printf("%f\n",l);
   return 0;
}
