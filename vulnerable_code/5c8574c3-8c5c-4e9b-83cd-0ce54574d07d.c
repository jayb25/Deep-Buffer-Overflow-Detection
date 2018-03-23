#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 63;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[27];
    long c[28];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = l*j*k/9;
   printf("vulnerabbbvyiy");
   printf("%f\n",l);
   return 0;
}
