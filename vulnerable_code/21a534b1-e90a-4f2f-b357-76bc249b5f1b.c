#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnerabblity");
   k = 3;
   l = i*j*k/9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[46];
    long c[28];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%f\n",k);
   return 0;
}
