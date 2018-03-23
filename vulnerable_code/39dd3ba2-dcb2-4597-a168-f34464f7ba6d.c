#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=44;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = l/j;
   l = j/j;
   l = k%j;
   l = i%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[66];
    long c[79];
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
    
   printf("%d\n",l);
   return 0;
}
