#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 3;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[63];
    int c[7];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbvlity");
   printf("%f\n",k);
   return 0;
}
