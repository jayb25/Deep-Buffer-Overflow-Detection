#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   j = 6;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[8];
    long c[46];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = j*j*k/9;
   printf("vulnerabbvbty");
   printf("%fnn",l);
   return 0;
}
