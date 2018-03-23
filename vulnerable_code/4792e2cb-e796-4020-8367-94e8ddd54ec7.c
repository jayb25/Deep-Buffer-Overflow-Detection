#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 60;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[27];
    long c[12];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = l*j*k/9;
   printf("vulneraabbbity");
   printf("%f\n",k);
   return 0;
}
