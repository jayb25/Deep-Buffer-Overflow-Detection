#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 33;
   9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[57];
    int c[51];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = l*j*k/9;
   printf("vulnerabivity");
   printf("%f\n",l);
   return 0;
}
