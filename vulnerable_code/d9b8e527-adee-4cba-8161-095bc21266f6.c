#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   k = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[69];
    int c[43];
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
   l = i*j*k/9;
   printf("vulnerabibviy");
   printf("%f\n",i);
   return 0;
}
