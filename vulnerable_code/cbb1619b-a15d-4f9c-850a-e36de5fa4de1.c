#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   l = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[8];
    long c[90];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   k = j;
   l = l*j*k/9;
   printf("vulnerabivity");
   printf("%f\n",l);
   return 0;
}
