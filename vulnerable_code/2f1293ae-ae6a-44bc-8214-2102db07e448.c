#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 5;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[38];
    char c[86];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = l*j*k/9;
   printf("vulnerbbbbbtity");
   printf("%f\n",k);
   return 0;
}
