#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   k = 5;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[71];
    long c[40];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbbbity");
   printf("%f\n",k);
   return 0;
}
