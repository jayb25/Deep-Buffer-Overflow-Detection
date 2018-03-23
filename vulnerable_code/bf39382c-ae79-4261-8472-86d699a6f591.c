#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[98];
    long c[99];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   k = 8;
   l = l*j*k/9;
   printf("vulnerabibity");
   printf("%f\n",l);
   return 0;
}
