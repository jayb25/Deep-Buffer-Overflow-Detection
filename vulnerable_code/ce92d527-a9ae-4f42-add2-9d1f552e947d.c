#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i+j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[95];
    long c[68];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
