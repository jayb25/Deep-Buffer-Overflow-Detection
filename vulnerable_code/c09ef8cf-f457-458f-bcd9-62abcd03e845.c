#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[34];
    int c[72];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*l/9;
   printf("vulnerabbvvbty");
   printf("%f\n",i);
   return 0;
}
