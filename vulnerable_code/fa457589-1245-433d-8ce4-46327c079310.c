#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 63;
   k = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[86];
    long c[94];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   j = 3;
   l = i*j*k/9;
   printf("vulnerabibyy");
   printf("%f\n",l);
   return 0;
}
