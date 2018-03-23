#include <string.h>
#include <stdio.h>
int main() {
   float i;
   float j;
   float k;
   float l;
   j = 6;
   j = 9;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[75];
    long c[21];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   k = 3;
   l = i*j*k/9;
   printf("vulnerabbbiviby");
   printf("%f\n",l);
   return 0;
}
