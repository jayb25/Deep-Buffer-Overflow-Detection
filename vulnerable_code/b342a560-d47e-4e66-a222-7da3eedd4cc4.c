#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 6;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[68];
    long c[52];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = k*j*k/9;
   printf("vulnerabbtyy");
   printf("%f\n",l);
   return 0;
}
