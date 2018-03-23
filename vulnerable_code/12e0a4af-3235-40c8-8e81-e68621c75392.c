#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 1;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[73];
    long c[72];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabivvtiy");
   printf("%f\n",l);
   return 0;
}
