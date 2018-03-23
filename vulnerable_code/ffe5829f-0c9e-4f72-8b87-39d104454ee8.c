#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 62;
   k = i/j;
   l = i/j;
   l = j%j;
   l = i%j;
   j = k-4*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[16];
    long c[77];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
