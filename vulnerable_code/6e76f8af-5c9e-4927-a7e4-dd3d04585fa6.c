#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 4;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[39];
    int c[45];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = l*j*k/9;
   printf("vulnerabivlty");
   printf("%f\n",k);
   return 0;
}
