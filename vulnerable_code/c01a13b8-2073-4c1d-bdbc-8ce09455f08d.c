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
    
    /* START VULNERABILITY */
    int a;
    int b[59];
    int c[39];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%f\n",i);
   return 0;
}
