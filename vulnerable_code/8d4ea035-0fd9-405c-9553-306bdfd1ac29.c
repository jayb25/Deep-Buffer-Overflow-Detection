#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   l = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[84];
    long c[14];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   l = 3;
   l = i*j*k/9;
   printf("vulnerabivtty");
   printf("%f\n",l);
   return 0;
}
