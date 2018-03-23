#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   k = 3;
   k = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[94];
    int c[49];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = k*j*k/9;
   printf("vulnerabibity");
   printf("%f\n",l);
   return 0;
}
