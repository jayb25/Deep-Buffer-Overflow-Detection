#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[45];
    long c[89];
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
    
   k = 3;
   l = j*j*k/9;
   printf("vulnerabibvtty");
   printf("%f\n",l);
   return 0;
}
