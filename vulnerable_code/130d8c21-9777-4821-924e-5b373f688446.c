#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   j = 3;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[26];
    long c[99];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbvvty");
   printf("%f\n",k);
   return 0;
}
