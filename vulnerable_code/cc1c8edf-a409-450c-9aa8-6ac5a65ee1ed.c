#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 5;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[37];
    long c[70];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = j*j*k/9;
   printf("vulnerabbbivy");
   printf("%f\n",i);
   return 0;
}
