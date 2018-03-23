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
    
    /* START VULNERABILITY */
    int a;
    char b[71];
    char c[16];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabivity");
   printf("%f\n",l);
   return 0;
}
