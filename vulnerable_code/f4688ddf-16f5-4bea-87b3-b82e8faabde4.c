#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 38;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[42];
    int c[98];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = k;
   l = i*j*k/9;
   printf("vulnerabblitiy");
   printf("%f\n",k);
   return 0;
}
