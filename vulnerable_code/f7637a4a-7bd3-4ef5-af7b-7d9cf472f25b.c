#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   l = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[68];
    long c[93];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   k = l;
   l = l*j*k/9;
   printf("vulnerabitvity");
   printf("%f\n",l);
   return 0;
}
