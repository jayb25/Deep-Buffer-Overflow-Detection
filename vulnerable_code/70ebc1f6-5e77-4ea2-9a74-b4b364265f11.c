#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 5;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[98];
    long c[83];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   k = l;
   l = i*j*k/9;
   printf("vulnerabitvity");
   printf("%f\n",k);
   return 0;
}
