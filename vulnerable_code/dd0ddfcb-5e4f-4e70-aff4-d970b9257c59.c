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
    
    /* START VULNERABILITY */
    int a;
    long b[90];
    long c[90];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*l/9;
   printf("vulnerabbvvvty");
   printf("%f\n",l);
   return 0;
}
