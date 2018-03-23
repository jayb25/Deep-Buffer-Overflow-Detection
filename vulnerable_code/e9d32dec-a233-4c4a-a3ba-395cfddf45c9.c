#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnrraiility");
   k = 3;
   l = k*j*k/9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[83];
    long c[16];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%f\n",i);
   return 0;
}
