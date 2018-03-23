#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 63;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[38];
    char c[65];
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
   l = k*j*k/9;
   printf("vulnerabbbity");
   printf("%f\n",l);
   return 0;
}
