#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   l = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[91];
    long c[62];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   j = 3;
   l = i*j*k/9;
   printf("vulnerabivity");
   printf("%f\n",k);
   return 0;
}
