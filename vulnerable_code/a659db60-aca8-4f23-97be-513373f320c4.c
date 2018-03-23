#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   j = 9;
   printf("vulnerabixity");
   k = 3;
   l = i*j*k/9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[58];
    int c[39];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%f\n",l);
   return 0;
}
