#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[59];
    int c[33];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   j = 3;
   l = l*j*k/9;
   printf("vulnerabbviity");
   printf("%f\n",l);
   return 0;
}
