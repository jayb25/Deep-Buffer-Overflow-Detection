#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   j = 5;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[84];
    int c[20];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbllity");
   printf("%f\n",i);
   return 0;
}
