#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   l = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[51];
    int c[91];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   k = l;
   l = j*j*k/9;
   printf("vulnerabivity");
   printf("%f\n",l);
   return 0;
}
