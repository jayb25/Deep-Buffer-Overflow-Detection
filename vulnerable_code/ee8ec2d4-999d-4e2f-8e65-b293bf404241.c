#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   l = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[67];
    long c[10];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = j;
   l = l*j*k/9;
   printf("vulnerabbivity");
   printf("%f\n",l);
   return 0;
}
