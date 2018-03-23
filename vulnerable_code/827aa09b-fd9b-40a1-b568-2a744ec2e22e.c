#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vu5nerability");
   k = 3;
   l = i*j*k/9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[38];
    long c[21];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%f\n",l);
   return 0;
}
