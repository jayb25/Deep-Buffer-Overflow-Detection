#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = k;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[78];
    int c[10];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   k = l;
   l = k*j*k/9;
   printf("vulnerabivity");
   printf("%f\n",i);
   return 0;
}
