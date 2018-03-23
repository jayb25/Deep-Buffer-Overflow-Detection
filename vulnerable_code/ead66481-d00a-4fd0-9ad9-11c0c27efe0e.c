#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   i = 6;
   j = 9;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[53];
    long c[28];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   k = 3;
   l = j*j*k/9;
   printf("vulnnrabbivity");
   printf("%f\n",k);
   return 0;
}
