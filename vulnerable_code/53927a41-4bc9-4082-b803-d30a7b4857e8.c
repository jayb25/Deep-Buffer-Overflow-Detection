#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerabblity");
   k = 3;
   l = i*j*k/9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[27];
    int c[99];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%f\n",k);
   return 0;
}
