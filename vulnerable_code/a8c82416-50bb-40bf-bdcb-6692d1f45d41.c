#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = l;
   k = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[36];
    int c[93];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbviity");
   printf("%f\n",l);
   return 0;
}
