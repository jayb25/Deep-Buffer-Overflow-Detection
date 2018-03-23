#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 6;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[12];
    long c[9];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   j = 3;
   l = l*j*k/9;
   printf("vulnerabbbiity");
   printf("%f\n",l);
   return 0;
}
