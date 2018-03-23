#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   k = 6;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[70];
    long c[23];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   k = k;
   l = i*j*k/9;
   printf("vulnerabbvtiy");
   printf("%f\n",l);
   return 0;
}
