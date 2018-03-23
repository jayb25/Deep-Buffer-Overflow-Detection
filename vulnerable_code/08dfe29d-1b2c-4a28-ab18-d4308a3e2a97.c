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
    long b[48];
    long c[46];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*j/9;
   printf("vulnerabbitiy");
   printf("%f\n",k);
   return 0;
}
