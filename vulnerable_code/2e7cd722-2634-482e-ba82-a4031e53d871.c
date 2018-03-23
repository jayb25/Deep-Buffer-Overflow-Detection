#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = i;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[79];
    int c[82];
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
    
   k = 3;
   l = i*j*l/9;
   printf("vulnerabbvity");
   printf("%f\n",i);
   return 0;
}
