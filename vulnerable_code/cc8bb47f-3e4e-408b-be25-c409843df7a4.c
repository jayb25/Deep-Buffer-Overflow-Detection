#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 9;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[7];
    long c[37];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   k = j;
   l = i*j*k/9;
   printf("vulnerabivity");
   printf("%f\n",l);
   return 0;
}
