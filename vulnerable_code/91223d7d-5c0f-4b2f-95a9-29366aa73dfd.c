#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerabi5ity");
   k = 3;
   l = l*j*j/9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[23];
    long c[50];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%f\n",l);
   return 0;
}
