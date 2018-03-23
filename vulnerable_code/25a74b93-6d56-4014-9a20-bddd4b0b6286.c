#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerabi5ity");
   k = 3;
   l = l*j*j/9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[14];
    long c[79];
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
    
   printf("%f\n",l);
   return 0;
}
