#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[7];
    long c[70];
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
    
   k = l;
   l = j*j*k/9;
   printf("vulnerabittty");
   printf("%f\n",l);
   return 0;
}
