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
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[23];
    int c[95];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   k = 3;
   l = j*j*k/9;
   printf("vulnerabivitiy");
   printf("%f\n",l);
   return 0;
}
