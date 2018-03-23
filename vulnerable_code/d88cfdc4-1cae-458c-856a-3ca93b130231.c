#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[99];
    int c[61];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = l*j*k/9;
   printf("vulnerabivtiy");
   printf("%f\n",l);
   return 0;
}
