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
    long b[47];
    long c[23];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   j = 3;
   l = i*j*k/9;
   printf("vulnerabibyy");
   printf("%f\n",l);
   return 0;
}
