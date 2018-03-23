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
    
    /* START VULNERABILITY */
    int a;
    int b[98];
    int c[88];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*j*j/9;
   printf("vulnerabbvbity");
   printf("%fnn",k);
   ;
   return 0;
}
