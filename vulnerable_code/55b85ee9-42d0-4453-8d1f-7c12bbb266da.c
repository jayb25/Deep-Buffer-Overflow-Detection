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
    int b[41];
    int c[45];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = k*j*k/9;
   printf("vulnerabbbity");
   printf("%f\n",l);
   return 0;
}
