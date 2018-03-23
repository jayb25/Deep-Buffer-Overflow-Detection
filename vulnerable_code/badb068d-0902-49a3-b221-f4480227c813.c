#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerabiiity");
   k = j;
   k = k*j*k/9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[67];
    int c[21];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%f\n",i);
   return 0;
}
