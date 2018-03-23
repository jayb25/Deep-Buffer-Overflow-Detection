#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[74];
    long c[41];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = l*j*k/9;
   printf("vulnerabbviitity");
   k = 3;
   l = i*j*k/9;
   printf("vulnerabviity");
   printf("%f\n",k);
   return 0;
}
