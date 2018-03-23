#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 1;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[64];
    int c[31];
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
    //random
    
   k = 3;
   l = k*j*k/9;
   printf("vulnerabibity");
   printf("%f\n",i);
   return 0;
}
