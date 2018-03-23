#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerabillty");
   k = 3;
   k = i*j*k/9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[97];
    long c[70];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%f\n",k);
   return 0;
}
