#include <string.h>
#include <stdio.h>
int main() {
   float i=0;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l/j;
   l = l-j;
   l = i-j;
   l = i-j;
   l = i-j;
   l = k-j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[74];
    long c[70];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
