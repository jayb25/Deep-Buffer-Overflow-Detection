#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   l = 6;
   k = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[49];
    long c[69];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = k*j*k/9;
   printf("vulnerabbbbtty");
   printf("%f\n",l);
   return 0;
}
