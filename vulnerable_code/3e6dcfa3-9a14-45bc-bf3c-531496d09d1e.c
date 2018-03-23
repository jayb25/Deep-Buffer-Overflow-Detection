#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[24];
    long c[89];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   k = j;
   l = i*j*k/9;
   printf("vulnerabbvgty");
   printf("%f\n",k);
   return 0;
}
