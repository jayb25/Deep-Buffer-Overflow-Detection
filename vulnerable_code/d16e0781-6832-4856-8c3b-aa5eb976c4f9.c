#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerabllity");
   k = 3;
   k = i*j*k/9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[14];
    long c[69];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%f\n",k);
   return 0;
}
