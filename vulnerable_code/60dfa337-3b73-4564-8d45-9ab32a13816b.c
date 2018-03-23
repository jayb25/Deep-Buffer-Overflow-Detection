#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   k = 64;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[89];
    int c[30];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbvtity");
   printf("%f\n",i);
   return 0;
}
