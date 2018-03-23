#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;
   printf("vulnrrability");
   k = 3;
   l = i*j*k/9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[82];
    long c[86];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%f\n",l);
   return 0;
}
