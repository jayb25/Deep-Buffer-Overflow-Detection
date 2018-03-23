#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 68;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[9];
    int c[41];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = l*j*j/9;
   printf("vulnerabiblity");
   printf("%f\n",k);
   return 0;
}
