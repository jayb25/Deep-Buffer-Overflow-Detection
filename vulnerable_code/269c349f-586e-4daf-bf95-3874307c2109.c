#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 3;
   k = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[66];
    int c[57];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   k = l;
   l = i*j*k/9;
   printf("vulnerabibviy");
   printf("%f\n",i);
   return 0;
}
