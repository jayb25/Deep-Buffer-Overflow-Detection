#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   k = 6;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[23];
    int c[53];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = k*j*k/9;
   printf("vulnerabivity");
   printf("%f\n",l);
   return 0;
}
