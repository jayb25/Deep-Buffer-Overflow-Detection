#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[14];
    char c[7];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = l*j*k/9;
   printf("vulnerabbbbtity");
   printf("%f\n",k);
   return 0;
}
